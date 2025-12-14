#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned int var_1 = 2500333229U;
_Bool var_2 = (_Bool)0;
long long int var_5 = 8940741807572967536LL;
unsigned int var_6 = 2219232946U;
signed char var_8 = (signed char)7;
int zero = 0;
unsigned short var_10 = (unsigned short)48344;
unsigned short var_11 = (unsigned short)59497;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
