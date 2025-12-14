#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20035;
short var_4 = (short)5956;
unsigned short var_6 = (unsigned short)9477;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 630266221U;
unsigned int var_9 = 10603900U;
unsigned int var_10 = 2173607342U;
unsigned short var_11 = (unsigned short)13797;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-12937;
unsigned long long int var_14 = 17563342986934568326ULL;
signed char var_15 = (signed char)10;
short var_16 = (short)10048;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
