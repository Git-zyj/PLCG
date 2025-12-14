#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -728595083;
int var_5 = 1195338875;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5599055160665304474ULL;
unsigned char var_9 = (unsigned char)93;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8213383645734409505ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-42;
unsigned long long int var_16 = 9324316509576467521ULL;
void init() {
}

void checksum() {
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
