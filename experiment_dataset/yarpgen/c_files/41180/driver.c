#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 56747228U;
short var_4 = (short)22061;
unsigned long long int var_5 = 4586193279773035515ULL;
signed char var_6 = (signed char)-107;
unsigned long long int var_7 = 11558249928131873931ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1340554619U;
unsigned char var_12 = (unsigned char)170;
unsigned long long int var_13 = 14702132487013791378ULL;
int var_14 = -628939093;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
