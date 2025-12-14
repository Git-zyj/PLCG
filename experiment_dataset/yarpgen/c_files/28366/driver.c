#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 2129161665U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 175441453768652407LL;
unsigned char var_17 = (unsigned char)5;
int zero = 0;
long long int var_19 = 3254192958460253178LL;
short var_20 = (short)4225;
int var_21 = -500905472;
int var_22 = 273427852;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
