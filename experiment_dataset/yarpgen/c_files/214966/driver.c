#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
int var_1 = 476266132;
unsigned short var_2 = (unsigned short)42931;
int var_3 = -835038675;
unsigned short var_5 = (unsigned short)7736;
unsigned short var_6 = (unsigned short)40546;
int var_8 = -1473553953;
unsigned long long int var_9 = 1417223397021713790ULL;
short var_10 = (short)-3186;
unsigned long long int var_11 = 7683584198650232827ULL;
signed char var_12 = (signed char)-122;
short var_14 = (short)20451;
unsigned long long int var_15 = 12771842760257874138ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)45631;
int var_17 = 2143233334;
int var_18 = 894690728;
int var_19 = 299885075;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)11026;
_Bool var_23 = (_Bool)0;
int var_24 = 496145006;
_Bool var_25 = (_Bool)0;
int var_26 = 371801263;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)59366;
unsigned short arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
int arr_2 [12] ;
_Bool arr_4 [12] ;
int arr_5 [12] [12] [12] ;
_Bool arr_9 [12] [12] [12] [12] ;
unsigned long long int arr_10 [12] ;
signed char arr_11 [12] [12] ;
int arr_13 [14] [14] ;
int arr_14 [14] ;
_Bool arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31716;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)59196;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -276045710 : 346483081;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -703350165 : -1552906204;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 16039448016837581117ULL : 18255716473904697978ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 1226094600;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 1771844522;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
