#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1454573839U;
unsigned int var_3 = 2559494011U;
unsigned long long int var_6 = 13800378508274584481ULL;
unsigned long long int var_7 = 10579027860288074313ULL;
unsigned int var_8 = 2094707052U;
int zero = 0;
unsigned int var_14 = 3824772517U;
unsigned long long int var_15 = 2700100888270001724ULL;
unsigned long long int var_16 = 13677729383203177291ULL;
unsigned int var_17 = 1146276689U;
unsigned int var_18 = 2421395875U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
