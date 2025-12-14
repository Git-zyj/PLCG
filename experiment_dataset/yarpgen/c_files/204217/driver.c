#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -480724382;
unsigned int var_4 = 1778020907U;
unsigned long long int var_6 = 11686367036641337904ULL;
unsigned long long int var_9 = 6823628842189853688ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)47668;
signed char var_13 = (signed char)-53;
unsigned long long int var_14 = 13886578084713175071ULL;
int var_15 = 1456218291;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
