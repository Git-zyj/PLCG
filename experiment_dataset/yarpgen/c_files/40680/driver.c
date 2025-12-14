#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58144;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)117;
unsigned int var_5 = 2968915078U;
unsigned short var_6 = (unsigned short)22506;
unsigned int var_8 = 3032296649U;
int var_11 = 621821926;
unsigned short var_12 = (unsigned short)21126;
int var_13 = -1956391948;
unsigned long long int var_14 = 7147427180816076566ULL;
unsigned long long int var_16 = 3545535407621185977ULL;
int zero = 0;
unsigned int var_18 = 2342649047U;
unsigned short var_19 = (unsigned short)40985;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)111;
int var_24 = -362592718;
int var_25 = -1447274876;
unsigned char arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)115;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
