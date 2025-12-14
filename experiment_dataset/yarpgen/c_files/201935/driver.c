#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12525017357471015351ULL;
int var_4 = 54919621;
unsigned int var_8 = 1570954611U;
int zero = 0;
signed char var_17 = (signed char)-12;
unsigned short var_18 = (unsigned short)51742;
unsigned int var_19 = 3069972236U;
unsigned short var_20 = (unsigned short)48052;
unsigned short var_21 = (unsigned short)38358;
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
