#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
unsigned int var_10 = 1797245446U;
signed char var_11 = (signed char)85;
int zero = 0;
unsigned int var_16 = 114714740U;
int var_17 = 1133194951;
long long int var_18 = -1358558008936627191LL;
void init() {
}

void checksum() {
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
