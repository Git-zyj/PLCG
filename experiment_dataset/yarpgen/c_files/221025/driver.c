#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2826;
int var_3 = -659008642;
unsigned long long int var_4 = 1251338319007721156ULL;
long long int var_11 = 7300875029491940485LL;
_Bool var_12 = (_Bool)0;
int var_16 = -262214204;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)-13099;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)41163;
unsigned char var_23 = (unsigned char)119;
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
