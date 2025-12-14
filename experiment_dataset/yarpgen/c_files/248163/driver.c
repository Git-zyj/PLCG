#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
signed char var_2 = (signed char)(-127 - 1);
unsigned char var_3 = (unsigned char)75;
unsigned long long int var_4 = 13409448441337524381ULL;
signed char var_6 = (signed char)125;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)20624;
unsigned long long int var_19 = 14100229625954607411ULL;
unsigned int var_20 = 2477936116U;
unsigned char var_21 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
