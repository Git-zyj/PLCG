#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
signed char var_6 = (signed char)98;
long long int var_7 = 2237473815852799003LL;
long long int var_11 = 134344686973015607LL;
signed char var_14 = (signed char)-109;
int zero = 0;
signed char var_15 = (signed char)32;
unsigned int var_16 = 3099428562U;
unsigned int var_17 = 1714727435U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
