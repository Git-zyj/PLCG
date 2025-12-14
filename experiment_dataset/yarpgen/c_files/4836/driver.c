#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned int var_2 = 377270781U;
_Bool var_3 = (_Bool)0;
long long int var_5 = -6525465714424304435LL;
_Bool var_7 = (_Bool)0;
int var_11 = 392592162;
unsigned int var_12 = 912758692U;
long long int var_13 = 4384816841203375516LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)152;
signed char var_16 = (signed char)-115;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2861101876U;
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
