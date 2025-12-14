#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 334277397;
signed char var_2 = (signed char)-98;
unsigned char var_7 = (unsigned char)43;
short var_11 = (short)-22033;
long long int var_14 = -1328575175742227523LL;
long long int var_15 = 76617938493793511LL;
unsigned int var_17 = 665088115U;
int zero = 0;
long long int var_18 = -3971475541663805131LL;
unsigned int var_19 = 1196662575U;
long long int var_20 = -2312421359046434653LL;
short var_21 = (short)-28216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
