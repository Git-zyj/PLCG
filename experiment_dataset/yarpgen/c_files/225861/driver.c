#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11558;
signed char var_4 = (signed char)-11;
unsigned int var_6 = 3329515173U;
int zero = 0;
unsigned short var_19 = (unsigned short)25943;
unsigned long long int var_20 = 13073450324908564039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
