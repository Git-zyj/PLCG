#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
short var_2 = (short)-12301;
unsigned char var_4 = (unsigned char)11;
signed char var_5 = (signed char)23;
signed char var_6 = (signed char)112;
long long int var_7 = 6194708856293678502LL;
signed char var_11 = (signed char)-16;
unsigned int var_13 = 2000689194U;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
