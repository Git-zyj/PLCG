#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2131741412;
unsigned char var_2 = (unsigned char)250;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2625982391U;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 376841526U;
unsigned char var_14 = (unsigned char)117;
int var_15 = 1013373371;
int zero = 0;
signed char var_16 = (signed char)-102;
unsigned int var_17 = 271864650U;
void init() {
}

void checksum() {
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
