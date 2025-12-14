#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11983314611713514606ULL;
int var_5 = -1805287004;
unsigned long long int var_8 = 15675266469525104116ULL;
int zero = 0;
long long int var_11 = -7965566422363763652LL;
unsigned int var_12 = 4071056135U;
int var_13 = 985924663;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
