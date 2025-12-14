#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -615465847;
unsigned char var_6 = (unsigned char)254;
unsigned char var_7 = (unsigned char)105;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
unsigned int var_14 = 2957258186U;
long long int var_15 = -2467501996223869433LL;
long long int var_16 = -1400738793048795151LL;
long long int var_17 = -4916749172989780595LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
