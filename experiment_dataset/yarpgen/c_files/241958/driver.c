#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5540574128597118024LL;
long long int var_1 = -3995720527745401031LL;
short var_2 = (short)-5801;
long long int var_5 = 2826011780530968680LL;
unsigned short var_12 = (unsigned short)13840;
unsigned short var_14 = (unsigned short)30896;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)11339;
int var_20 = -1965303955;
short var_21 = (short)896;
int var_22 = -681617580;
short var_23 = (short)-26832;
long long int var_24 = 5815633194018963422LL;
short var_25 = (short)19739;
unsigned long long int var_26 = 13862694770139990678ULL;
unsigned short var_27 = (unsigned short)6031;
short var_28 = (short)-28121;
unsigned long long int var_29 = 8894236152503546052ULL;
short arr_0 [12] [12] ;
long long int arr_1 [12] [12] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_4 [24] ;
long long int arr_6 [16] ;
long long int arr_9 [16] ;
unsigned long long int arr_10 [16] ;
int arr_11 [16] ;
short arr_13 [16] [16] [16] [16] ;
long long int arr_14 [15] ;
long long int arr_2 [12] [12] ;
short arr_5 [24] [24] ;
short arr_8 [16] ;
_Bool arr_24 [15] ;
unsigned long long int arr_25 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1446;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -4075312517003696951LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 5156432852673268616ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 17748887076821757099ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 8765440431395797582LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -7085395983543948801LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 208402129996201256ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -1189764461;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)21133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -1692043159416263192LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 5812095854789383119LL : 7553441211611295779LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)1452;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)19694;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 16020278040527197930ULL : 5326579300227502598ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
