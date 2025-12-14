#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5565432195280597828ULL;
signed char var_2 = (signed char)87;
unsigned long long int var_5 = 4084277764435259382ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)9832;
long long int var_8 = 6920326416156024445LL;
short var_9 = (short)-15809;
unsigned int var_11 = 2432056290U;
short var_13 = (short)-4355;
long long int var_15 = 4909150857996398462LL;
unsigned char var_16 = (unsigned char)12;
unsigned int var_18 = 689995350U;
int zero = 0;
unsigned short var_20 = (unsigned short)36965;
int var_21 = 1284941581;
void init() {
}

void checksum() {
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
