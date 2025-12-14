#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 4121495443224901594LL;
unsigned char var_2 = (unsigned char)155;
unsigned long long int var_3 = 14631515844480646310ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)32;
signed char var_8 = (signed char)57;
unsigned char var_9 = (unsigned char)220;
unsigned char var_11 = (unsigned char)57;
long long int var_13 = 6299895205790884694LL;
unsigned long long int var_14 = 12117196535259591651ULL;
int zero = 0;
long long int var_15 = 3107372850462018810LL;
unsigned long long int var_16 = 10457473571829148284ULL;
unsigned long long int var_17 = 16966904456318512716ULL;
unsigned char var_18 = (unsigned char)36;
unsigned char var_19 = (unsigned char)58;
_Bool var_20 = (_Bool)0;
int var_21 = -550956494;
signed char var_22 = (signed char)111;
unsigned char var_23 = (unsigned char)177;
unsigned char var_24 = (unsigned char)144;
int var_25 = 1090052979;
unsigned long long int var_26 = 14827548968779056126ULL;
unsigned char var_27 = (unsigned char)114;
unsigned char var_28 = (unsigned char)103;
unsigned long long int arr_0 [12] [12] ;
_Bool arr_1 [12] ;
unsigned char arr_3 [12] ;
long long int arr_5 [17] ;
unsigned int arr_6 [17] ;
signed char arr_7 [17] ;
int arr_8 [13] [13] ;
int arr_9 [13] ;
unsigned short arr_13 [13] [13] [13] [13] ;
unsigned char arr_15 [13] [13] [13] [13] [13] ;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 13425023163981657735ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -6859476390699783718LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1134906483U : 470896607U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = -301013556;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 310690085 : 7754626;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27501;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
