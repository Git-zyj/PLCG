#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3675017140U;
signed char var_12 = (signed char)76;
int zero = 0;
long long int var_13 = -2871945552660203131LL;
unsigned char var_14 = (unsigned char)250;
unsigned int var_15 = 1831233940U;
void init() {
}

void checksum() {
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
