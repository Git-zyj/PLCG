#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16603473724633790889ULL;
signed char var_1 = (signed char)30;
unsigned short var_2 = (unsigned short)35759;
signed char var_5 = (signed char)3;
unsigned int var_6 = 1600010273U;
long long int var_8 = 6684337110366447563LL;
unsigned short var_9 = (unsigned short)57883;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)189;
short var_13 = (short)19074;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3866454996U;
int var_16 = -80744772;
unsigned long long int var_17 = 7770022339217302165ULL;
long long int var_18 = -3692819704703413213LL;
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
