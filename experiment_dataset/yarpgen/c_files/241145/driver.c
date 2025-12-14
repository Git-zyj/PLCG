#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)219;
int var_4 = -655121674;
unsigned char var_7 = (unsigned char)58;
int var_8 = 107768608;
int var_10 = -789358807;
int var_11 = 1364726917;
int zero = 0;
int var_12 = -1474580302;
unsigned short var_13 = (unsigned short)47686;
int var_14 = 232756903;
int var_15 = 1140968251;
int var_16 = -624648617;
unsigned int var_17 = 1615907421U;
int var_18 = 1069018064;
int var_19 = 1132063351;
unsigned char var_20 = (unsigned char)10;
int var_21 = 34284108;
int var_22 = 227388917;
unsigned char var_23 = (unsigned char)104;
int arr_0 [18] ;
unsigned char arr_3 [18] ;
int arr_7 [24] ;
unsigned char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 98641488 : -627634763;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1007203251 : 925511901;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)9;
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
