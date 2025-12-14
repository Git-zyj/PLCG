#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -117663415;
unsigned short var_1 = (unsigned short)40573;
int var_2 = 1732467823;
int var_4 = -374687891;
unsigned int var_11 = 3006657353U;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)20808;
long long int var_16 = 8005343852146004225LL;
unsigned short var_17 = (unsigned short)3153;
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
