#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41404;
unsigned int var_6 = 2293745781U;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)56926;
int zero = 0;
unsigned int var_18 = 4069751406U;
unsigned int var_19 = 1961115095U;
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
