#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)118;
long long int var_6 = -8999313198271910238LL;
unsigned int var_8 = 3173820985U;
unsigned long long int var_12 = 14828707023592557415ULL;
unsigned long long int var_13 = 4642385748526860240ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
long long int var_15 = -1621582292521464190LL;
unsigned char var_16 = (unsigned char)41;
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
