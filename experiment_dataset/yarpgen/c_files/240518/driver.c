#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1312191462;
unsigned short var_12 = (unsigned short)28138;
signed char var_13 = (signed char)77;
int zero = 0;
short var_17 = (short)-32424;
signed char var_18 = (signed char)-127;
unsigned long long int var_19 = 7252308606647212761ULL;
void init() {
}

void checksum() {
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
