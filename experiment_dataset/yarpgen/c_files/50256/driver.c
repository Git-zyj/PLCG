#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
long long int var_5 = 657654784875845648LL;
int var_7 = -1473701536;
int zero = 0;
signed char var_16 = (signed char)92;
unsigned char var_17 = (unsigned char)225;
unsigned int var_18 = 1487982263U;
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
