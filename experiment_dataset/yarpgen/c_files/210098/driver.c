#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 153243270U;
unsigned long long int var_11 = 12176474487300831974ULL;
int zero = 0;
long long int var_12 = -381376317060580553LL;
unsigned long long int var_13 = 16443693798717521686ULL;
unsigned short var_14 = (unsigned short)31040;
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
