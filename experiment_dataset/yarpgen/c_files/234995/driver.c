#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
signed char var_3 = (signed char)37;
short var_5 = (short)21451;
int var_6 = -790631378;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)229;
unsigned char var_11 = (unsigned char)84;
unsigned long long int var_12 = 6091502924002641227ULL;
short var_13 = (short)-18609;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
