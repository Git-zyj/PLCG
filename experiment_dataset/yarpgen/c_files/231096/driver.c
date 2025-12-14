#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4698;
signed char var_1 = (signed char)37;
unsigned char var_2 = (unsigned char)30;
signed char var_6 = (signed char)29;
unsigned short var_8 = (unsigned short)42117;
short var_12 = (short)-10225;
unsigned short var_14 = (unsigned short)58227;
int zero = 0;
long long int var_15 = -3590928096952651839LL;
unsigned long long int var_16 = 11873238966852055639ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
