#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14565;
unsigned long long int var_6 = 7416216947337124308ULL;
signed char var_7 = (signed char)82;
unsigned char var_10 = (unsigned char)134;
unsigned char var_13 = (unsigned char)102;
_Bool var_14 = (_Bool)0;
int var_16 = -1613535350;
unsigned int var_18 = 570947897U;
int zero = 0;
unsigned char var_20 = (unsigned char)51;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
