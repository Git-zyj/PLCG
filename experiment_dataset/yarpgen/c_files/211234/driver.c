#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9186513724021470027ULL;
int var_7 = 2083862145;
signed char var_11 = (signed char)24;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 15518933225822222032ULL;
signed char var_20 = (signed char)10;
unsigned long long int var_21 = 16846053270139344666ULL;
unsigned char var_22 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
