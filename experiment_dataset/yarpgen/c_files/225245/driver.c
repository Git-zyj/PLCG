#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41189;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 2737848016U;
unsigned long long int var_7 = 6504555133965065799ULL;
unsigned char var_9 = (unsigned char)155;
unsigned int var_11 = 3895597171U;
unsigned int var_12 = 3737841872U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2462378721U;
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
