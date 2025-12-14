#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1648057616;
unsigned short var_1 = (unsigned short)34685;
unsigned long long int var_3 = 6605004576953826380ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)30;
long long int var_7 = -3706145423388284834LL;
unsigned long long int var_10 = 8831266358183375343ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
long long int var_13 = -5325101936109704099LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)177;
unsigned int var_16 = 3156262261U;
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
