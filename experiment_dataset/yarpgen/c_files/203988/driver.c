#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28567;
unsigned short var_2 = (unsigned short)60030;
long long int var_3 = 8648711862602662329LL;
unsigned short var_4 = (unsigned short)36953;
unsigned short var_5 = (unsigned short)14264;
short var_6 = (short)31641;
long long int var_7 = -6708810074916877687LL;
unsigned short var_11 = (unsigned short)54111;
int zero = 0;
short var_15 = (short)-8726;
unsigned short var_16 = (unsigned short)44011;
short var_17 = (short)12760;
unsigned short var_18 = (unsigned short)25033;
unsigned int var_19 = 3924600440U;
unsigned char var_20 = (unsigned char)67;
unsigned int var_21 = 1223185063U;
signed char var_22 = (signed char)-126;
short arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
unsigned short arr_2 [12] [12] ;
long long int arr_4 [12] ;
short arr_5 [12] ;
unsigned short arr_6 [12] ;
signed char arr_3 [12] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)10776 : (short)12247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)56267;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)58813 : (unsigned short)35718;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5967960818654867327LL : 6327534976980071563LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-22100 : (short)26153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53211 : (unsigned short)46325;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3270939918229977092LL : -214915065350859724LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
