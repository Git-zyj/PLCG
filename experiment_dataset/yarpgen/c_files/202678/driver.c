#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1594223042U;
unsigned int var_1 = 1226797915U;
long long int var_2 = -7176251288545006541LL;
unsigned int var_8 = 558489738U;
int zero = 0;
unsigned int var_14 = 1139226960U;
signed char var_15 = (signed char)-27;
void init() {
}

void checksum() {
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
