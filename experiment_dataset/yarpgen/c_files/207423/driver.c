#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1348609478U;
unsigned short var_1 = (unsigned short)24476;
long long int var_2 = -2540376333142057959LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5452634786275109699LL;
long long int var_6 = 4674663555430005679LL;
int var_7 = 1130792765;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)226;
int var_11 = -785625375;
int zero = 0;
unsigned int var_12 = 776451896U;
unsigned int var_13 = 1932461080U;
_Bool var_14 = (_Bool)1;
int var_15 = -440442574;
unsigned long long int var_16 = 16744292561079541473ULL;
unsigned long long int var_17 = 14557386111449416659ULL;
unsigned long long int var_18 = 4315552501222571150ULL;
short var_19 = (short)-14397;
signed char arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)42;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
