#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3952448653U;
signed char var_9 = (signed char)67;
long long int var_11 = 8116530505007206386LL;
long long int var_13 = 4912635764958258076LL;
short var_14 = (short)-25442;
int zero = 0;
unsigned short var_15 = (unsigned short)6453;
unsigned int var_16 = 643265071U;
unsigned char var_17 = (unsigned char)6;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
