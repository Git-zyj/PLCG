#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9688800662580051305ULL;
unsigned long long int var_7 = 1974658660204418411ULL;
int var_8 = 390137221;
int zero = 0;
unsigned int var_11 = 4084225186U;
int var_12 = -1116843869;
short var_13 = (short)-20147;
short var_14 = (short)-1987;
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
