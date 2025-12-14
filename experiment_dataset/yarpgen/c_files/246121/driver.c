#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)4724;
long long int var_8 = 2601350230251419575LL;
unsigned short var_9 = (unsigned short)33276;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1830931646U;
int zero = 0;
unsigned char var_16 = (unsigned char)40;
unsigned int var_17 = 1824157691U;
unsigned int var_18 = 3321459598U;
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
