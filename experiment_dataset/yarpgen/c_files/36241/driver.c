#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58729;
unsigned long long int var_3 = 11894146115471350528ULL;
unsigned short var_4 = (unsigned short)47893;
unsigned short var_5 = (unsigned short)45603;
unsigned short var_7 = (unsigned short)13553;
unsigned short var_8 = (unsigned short)48330;
int zero = 0;
unsigned short var_12 = (unsigned short)7030;
unsigned long long int var_13 = 14025793732457776739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
