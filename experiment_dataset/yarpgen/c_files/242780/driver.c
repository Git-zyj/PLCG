#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14135044549285760302ULL;
signed char var_2 = (signed char)-13;
unsigned short var_4 = (unsigned short)41713;
unsigned long long int var_8 = 67455467534198717ULL;
int zero = 0;
signed char var_11 = (signed char)-49;
unsigned int var_12 = 1842855455U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
