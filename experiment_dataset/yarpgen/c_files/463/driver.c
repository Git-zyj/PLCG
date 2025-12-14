#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4058609937203620298LL;
signed char var_8 = (signed char)65;
int var_10 = 1096754300;
long long int var_15 = 1740654334358568106LL;
int zero = 0;
signed char var_16 = (signed char)-115;
signed char var_17 = (signed char)51;
long long int var_18 = 253519836008429990LL;
int var_19 = 961668711;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
