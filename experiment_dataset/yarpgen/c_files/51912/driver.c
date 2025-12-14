#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11534;
unsigned short var_2 = (unsigned short)62137;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11715502265122440830ULL;
short var_6 = (short)-14527;
unsigned int var_8 = 3170966191U;
short var_9 = (short)24803;
short var_10 = (short)28093;
unsigned short var_12 = (unsigned short)15810;
unsigned char var_13 = (unsigned char)20;
int zero = 0;
unsigned long long int var_16 = 11283915881945437854ULL;
long long int var_17 = 2836273864980264664LL;
int var_18 = -1367653519;
int var_19 = -1211723168;
short var_20 = (short)28622;
unsigned long long int var_21 = 15315015047162841438ULL;
unsigned long long int var_22 = 3785558457890113434ULL;
unsigned int var_23 = 481362937U;
unsigned short var_24 = (unsigned short)47708;
short var_25 = (short)-10427;
unsigned short var_26 = (unsigned short)59552;
short var_27 = (short)26483;
unsigned long long int var_28 = 14108614820976702391ULL;
unsigned int var_29 = 1081103106U;
int var_30 = -1086833156;
short arr_2 [11] ;
unsigned int arr_6 [21] ;
unsigned short arr_7 [21] ;
unsigned long long int arr_13 [21] [21] ;
short arr_22 [15] [15] ;
short arr_4 [11] ;
_Bool arr_15 [21] ;
long long int arr_18 [11] ;
short arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)10120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 2873997244U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)55940;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 10458937341490814133ULL : 11467000084945110230ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (short)20152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-29217;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = -8409557802177818720LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (short)7287;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
