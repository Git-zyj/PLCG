#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -671520270;
unsigned long long int var_5 = 8352628306982891247ULL;
int var_10 = -2020501227;
unsigned long long int var_12 = 2861048628737053694ULL;
int zero = 0;
unsigned long long int var_13 = 11010930021594506880ULL;
short var_14 = (short)7199;
long long int var_15 = 333702250361734110LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
