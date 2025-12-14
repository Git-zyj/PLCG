#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7977609741518460164LL;
long long int var_3 = 4062403658897582377LL;
long long int var_4 = 3482493403667071174LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5587078562573088902LL;
unsigned int var_8 = 2633238414U;
unsigned char var_11 = (unsigned char)16;
int zero = 0;
unsigned short var_19 = (unsigned short)50193;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3996419495U;
int var_22 = 1165538805;
unsigned int var_23 = 1710266690U;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
