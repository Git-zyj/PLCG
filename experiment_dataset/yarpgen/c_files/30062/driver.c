#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51913;
short var_1 = (short)-18700;
signed char var_4 = (signed char)-39;
unsigned char var_7 = (unsigned char)62;
unsigned long long int var_8 = 15788391118240232438ULL;
unsigned long long int var_9 = 15420986002509888432ULL;
int var_10 = 413120480;
long long int var_11 = 9049759953618531979LL;
unsigned char var_12 = (unsigned char)234;
unsigned long long int var_14 = 14122302681499294772ULL;
unsigned short var_15 = (unsigned short)35609;
unsigned long long int var_16 = 15765406364872637687ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 153226488U;
long long int var_21 = -7756502094086047337LL;
unsigned short var_22 = (unsigned short)32996;
signed char var_23 = (signed char)-125;
unsigned long long int var_24 = 13536710246486236162ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
