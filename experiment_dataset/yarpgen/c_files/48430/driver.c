#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10202238230852371162ULL;
unsigned short var_6 = (unsigned short)9349;
unsigned int var_7 = 2113212583U;
unsigned long long int var_16 = 5862398852846948783ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)7085;
unsigned long long int var_19 = 6654582890709850135ULL;
void init() {
}

void checksum() {
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
