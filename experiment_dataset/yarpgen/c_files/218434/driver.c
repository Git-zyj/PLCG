#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 953369841137093358ULL;
unsigned long long int var_9 = 13392286181516716996ULL;
unsigned long long int var_12 = 9222694931981182283ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 6882675148924872845ULL;
int zero = 0;
unsigned long long int var_20 = 11507019848284341135ULL;
unsigned long long int var_21 = 6178500304911317969ULL;
unsigned int var_22 = 507396152U;
signed char var_23 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
