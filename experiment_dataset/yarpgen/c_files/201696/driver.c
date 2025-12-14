#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
int var_1 = -1050366590;
unsigned short var_2 = (unsigned short)51173;
unsigned short var_3 = (unsigned short)13615;
short var_4 = (short)24460;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)59523;
short var_9 = (short)-15745;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1143387085U;
signed char var_13 = (signed char)65;
int var_14 = -14293858;
int zero = 0;
unsigned long long int var_19 = 15983051700881638363ULL;
short var_20 = (short)20281;
unsigned short var_21 = (unsigned short)20249;
short var_22 = (short)7161;
unsigned short var_23 = (unsigned short)28183;
unsigned short var_24 = (unsigned short)63142;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)68;
long long int var_27 = -749721473961358159LL;
short var_28 = (short)-4647;
unsigned short var_29 = (unsigned short)1513;
int var_30 = 235019990;
unsigned short var_31 = (unsigned short)40439;
short var_32 = (short)24090;
short var_33 = (short)14581;
unsigned short var_34 = (unsigned short)51308;
short var_35 = (short)-4621;
unsigned short var_36 = (unsigned short)30017;
unsigned int var_37 = 2526796539U;
unsigned short var_38 = (unsigned short)38063;
unsigned long long int var_39 = 12875667238374153235ULL;
unsigned short var_40 = (unsigned short)41131;
int arr_0 [21] [21] ;
unsigned char arr_1 [21] [21] ;
unsigned short arr_5 [21] ;
short arr_6 [21] ;
_Bool arr_7 [21] ;
unsigned long long int arr_15 [10] ;
unsigned char arr_24 [16] ;
int arr_26 [16] [16] ;
unsigned short arr_32 [16] ;
long long int arr_34 [16] [16] [16] ;
long long int arr_35 [16] [16] [16] [16] [16] ;
signed char arr_2 [21] ;
short arr_3 [21] [21] ;
signed char arr_8 [21] [21] ;
unsigned long long int arr_23 [10] ;
unsigned long long int arr_36 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1414710213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)47810;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-22953;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 9572508382713493695ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = 452002026;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (unsigned short)53264;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 3860812112744504561LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = -8707484700282344360LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)26767;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 135179758197779360ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 8519574549110599065ULL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
