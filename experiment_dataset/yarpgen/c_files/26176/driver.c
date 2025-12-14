#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40550;
unsigned char var_6 = (unsigned char)42;
unsigned int var_7 = 160310653U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2793561864U;
int var_12 = -317640180;
short var_13 = (short)16262;
unsigned int var_14 = 3505027047U;
long long int var_15 = 715058477276845923LL;
int zero = 0;
long long int var_16 = -3095717123673909541LL;
signed char var_17 = (signed char)122;
signed char var_18 = (signed char)0;
void init() {
}

void checksum() {
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
