#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -391432798870539200LL;
int var_4 = -1258582364;
signed char var_8 = (signed char)117;
int var_10 = 295718986;
int zero = 0;
unsigned long long int var_15 = 11460642595726193927ULL;
int var_16 = 1375837926;
unsigned int var_17 = 781603846U;
int var_18 = -1720815901;
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
