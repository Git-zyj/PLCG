#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 998568757U;
long long int var_4 = -7770647489751085156LL;
long long int var_6 = 4190560553651397727LL;
signed char var_14 = (signed char)-64;
unsigned int var_15 = 2147092069U;
unsigned long long int var_17 = 4106900269808343650ULL;
int zero = 0;
signed char var_18 = (signed char)-103;
short var_19 = (short)-32108;
void init() {
}

void checksum() {
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
