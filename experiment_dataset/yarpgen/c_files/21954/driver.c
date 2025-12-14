#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14297366686273063383ULL;
int var_2 = -1909129939;
unsigned short var_6 = (unsigned short)49330;
signed char var_9 = (signed char)-104;
unsigned int var_10 = 3019483678U;
int var_11 = 183738926;
int zero = 0;
unsigned int var_16 = 4050112852U;
long long int var_17 = 2894582579105492371LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
