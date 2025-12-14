#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 18313965807591298135ULL;
unsigned char var_3 = (unsigned char)21;
long long int var_5 = 2047439822113189253LL;
unsigned char var_6 = (unsigned char)158;
long long int var_7 = 5479780113971059283LL;
short var_8 = (short)-14566;
short var_9 = (short)-16440;
short var_10 = (short)-19769;
unsigned char var_11 = (unsigned char)169;
int zero = 0;
unsigned long long int var_12 = 3350202904696572315ULL;
signed char var_13 = (signed char)-93;
unsigned char var_14 = (unsigned char)83;
unsigned char var_15 = (unsigned char)51;
unsigned short var_16 = (unsigned short)33908;
unsigned short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)20216;
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
