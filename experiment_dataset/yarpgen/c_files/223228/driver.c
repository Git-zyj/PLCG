#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 187589170U;
long long int var_8 = 5735959438824262149LL;
unsigned short var_13 = (unsigned short)22123;
int zero = 0;
signed char var_15 = (signed char)8;
unsigned long long int var_16 = 1610103702944691921ULL;
void init() {
}

void checksum() {
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
