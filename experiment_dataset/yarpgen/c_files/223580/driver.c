#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2696355794U;
unsigned char var_6 = (unsigned char)64;
signed char var_10 = (signed char)1;
int var_16 = -855059402;
int zero = 0;
unsigned long long int var_17 = 16318777660261973451ULL;
long long int var_18 = -8224679146696079229LL;
signed char var_19 = (signed char)102;
unsigned long long int var_20 = 12849350189031263220ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
