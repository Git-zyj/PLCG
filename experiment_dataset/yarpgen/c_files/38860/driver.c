#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1362216047;
unsigned long long int var_11 = 12139660649464913733ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
long long int var_15 = 8853961980538617873LL;
unsigned int var_16 = 3469610944U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
