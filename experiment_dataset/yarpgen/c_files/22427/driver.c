#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2768033355U;
_Bool var_2 = (_Bool)0;
long long int var_3 = -318141146954465829LL;
long long int var_10 = -1938474252166516470LL;
int zero = 0;
unsigned char var_14 = (unsigned char)117;
unsigned char var_15 = (unsigned char)192;
unsigned long long int var_16 = 16113885837579215977ULL;
unsigned short var_17 = (unsigned short)27277;
unsigned int var_18 = 1788415760U;
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
