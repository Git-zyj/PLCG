#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32382;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)51916;
unsigned char var_7 = (unsigned char)250;
long long int var_10 = -5580984756690614797LL;
unsigned char var_11 = (unsigned char)93;
_Bool var_12 = (_Bool)1;
int var_13 = -591967134;
short var_15 = (short)2047;
int zero = 0;
int var_17 = -113199375;
unsigned long long int var_18 = 10541652462954153884ULL;
int var_19 = 1910212829;
unsigned short var_20 = (unsigned short)18099;
unsigned long long int var_21 = 14975669046270286399ULL;
unsigned short var_22 = (unsigned short)21748;
int var_23 = -167815115;
int var_24 = -516980369;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)47249;
unsigned char var_27 = (unsigned char)7;
short arr_0 [19] ;
unsigned char arr_1 [19] ;
short arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)12741;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)16381;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1431694406U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 11192264146224484407ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
