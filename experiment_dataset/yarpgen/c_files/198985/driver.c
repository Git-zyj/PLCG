#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13584634884432878154ULL;
unsigned int var_9 = 1066364222U;
unsigned int var_12 = 4253837487U;
signed char var_14 = (signed char)114;
int zero = 0;
unsigned short var_15 = (unsigned short)14531;
unsigned long long int var_16 = 3287800808906132314ULL;
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
