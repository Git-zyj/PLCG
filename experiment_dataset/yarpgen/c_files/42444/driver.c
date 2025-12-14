#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 525638868U;
unsigned char var_1 = (unsigned char)238;
int var_3 = -574077485;
_Bool var_4 = (_Bool)0;
long long int var_8 = 7372737073771195081LL;
short var_9 = (short)-3566;
long long int var_10 = 3438561989478282850LL;
long long int var_11 = -3626777486695734913LL;
int var_12 = -1279252038;
int zero = 0;
short var_15 = (short)2242;
signed char var_16 = (signed char)63;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
