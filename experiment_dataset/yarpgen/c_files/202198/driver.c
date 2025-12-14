#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15967;
_Bool var_2 = (_Bool)1;
long long int var_14 = 637452518511334053LL;
int var_16 = -1872730704;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-123;
int zero = 0;
signed char var_19 = (signed char)41;
int var_20 = -1573924539;
int var_21 = -172336331;
void init() {
}

void checksum() {
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
