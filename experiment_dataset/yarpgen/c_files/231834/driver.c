#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1359090645;
unsigned long long int var_6 = 11634318814232143795ULL;
signed char var_8 = (signed char)31;
signed char var_10 = (signed char)-126;
int zero = 0;
long long int var_15 = 3071756471714055826LL;
unsigned short var_16 = (unsigned short)42438;
signed char var_17 = (signed char)114;
short var_18 = (short)-20923;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
