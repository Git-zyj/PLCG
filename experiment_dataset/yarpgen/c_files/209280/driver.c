#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned long long int var_10 = 7676517867197248979ULL;
int zero = 0;
unsigned long long int var_13 = 6462764834521272566ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)30705;
unsigned long long int var_16 = 10929016291952886539ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
