#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -926826501;
_Bool var_3 = (_Bool)1;
int var_4 = 916282072;
short var_5 = (short)10168;
unsigned short var_10 = (unsigned short)39528;
unsigned long long int var_11 = 6983132025972244036ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)6789;
int zero = 0;
unsigned short var_14 = (unsigned short)5391;
int var_15 = -1542098545;
int var_16 = 1054264053;
int var_17 = -1129508285;
short var_18 = (short)3244;
unsigned long long int var_19 = 15929709156393724616ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)64094;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)54290;
long long int var_25 = 6670726625751464325LL;
unsigned long long int var_26 = 4801129695287694045ULL;
short var_27 = (short)-13452;
short arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_7 [15] ;
unsigned short arr_13 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3519;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 11506808133004712952ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 11486962036173627568ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)43530;
}

void checksum() {
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
