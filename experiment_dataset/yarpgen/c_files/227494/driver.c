#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5853591204019178351ULL;
signed char var_2 = (signed char)-101;
short var_5 = (short)679;
unsigned int var_9 = 3319795874U;
signed char var_10 = (signed char)-74;
signed char var_11 = (signed char)-88;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -140141719;
signed char var_15 = (signed char)27;
long long int var_16 = -3672275560559505183LL;
unsigned char var_17 = (unsigned char)101;
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
