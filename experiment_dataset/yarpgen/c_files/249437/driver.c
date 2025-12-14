#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7028207965064640600ULL;
long long int var_4 = 1090209178001396162LL;
signed char var_6 = (signed char)-121;
int var_10 = 2018423740;
int var_12 = -52905054;
unsigned int var_14 = 4222916809U;
int zero = 0;
int var_15 = 208576805;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
