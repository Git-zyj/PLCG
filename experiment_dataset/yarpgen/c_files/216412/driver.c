#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7384846041870787982LL;
unsigned int var_1 = 1792867257U;
short var_2 = (short)9213;
unsigned long long int var_3 = 13983949313497891346ULL;
unsigned short var_4 = (unsigned short)32738;
long long int var_9 = -4422601868932285624LL;
signed char var_10 = (signed char)75;
unsigned char var_11 = (unsigned char)143;
unsigned int var_14 = 2074442087U;
int zero = 0;
unsigned char var_16 = (unsigned char)239;
unsigned int var_17 = 3327296244U;
long long int var_18 = -7895662757358781441LL;
unsigned long long int var_19 = 9333557487300411465ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8160405928966367320LL;
unsigned long long int var_22 = 13103775776692182765ULL;
unsigned long long int var_23 = 4806416254306254069ULL;
unsigned short var_24 = (unsigned short)43437;
unsigned char var_25 = (unsigned char)152;
int var_26 = 1117299279;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)194;
short var_29 = (short)-26862;
unsigned int arr_0 [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
unsigned short arr_6 [12] [12] [12] ;
long long int arr_10 [12] [12] ;
_Bool arr_11 [12] [12] ;
unsigned char arr_13 [20] ;
long long int arr_15 [20] [20] ;
long long int arr_16 [20] ;
unsigned short arr_18 [16] ;
signed char arr_22 [16] [16] ;
unsigned int arr_27 [16] ;
unsigned long long int arr_9 [12] [12] ;
unsigned char arr_12 [12] ;
_Bool arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3318176886U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 139916350U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)13912;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = -6868703686364299348LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -1975318961999070219LL : 891418013914493377LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 5536094209079633796LL : 1600955069893065147LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned short)34482;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = 305906959U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 7073903220530998616ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
