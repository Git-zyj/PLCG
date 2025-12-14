#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2020563718;
unsigned short var_4 = (unsigned short)18566;
signed char var_6 = (signed char)-20;
int zero = 0;
signed char var_12 = (signed char)-91;
unsigned long long int var_13 = 17251721493777178427ULL;
unsigned long long int var_14 = 9743656362658214797ULL;
void init() {
}

void checksum() {
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
