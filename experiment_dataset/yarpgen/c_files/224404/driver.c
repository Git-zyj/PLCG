#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63478;
int var_5 = 1243150828;
unsigned short var_16 = (unsigned short)11962;
int zero = 0;
unsigned char var_17 = (unsigned char)141;
unsigned int var_18 = 1261550325U;
unsigned int var_19 = 2426219946U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
