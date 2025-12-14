#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)18840;
long long int var_10 = -5829493532630055181LL;
unsigned long long int var_15 = 15268298519291340656ULL;
int zero = 0;
unsigned long long int var_16 = 10676537778040750426ULL;
unsigned int var_17 = 740849846U;
int var_18 = -2091924701;
unsigned int var_19 = 665190834U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
