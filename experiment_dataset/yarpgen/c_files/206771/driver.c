#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
unsigned long long int var_5 = 16237198916556907295ULL;
unsigned int var_6 = 621476842U;
unsigned char var_7 = (unsigned char)14;
unsigned char var_9 = (unsigned char)91;
unsigned long long int var_10 = 14261662715511295758ULL;
long long int var_12 = 3769358408988557721LL;
short var_13 = (short)-10014;
long long int var_16 = -6703362102795129112LL;
unsigned char var_18 = (unsigned char)130;
int zero = 0;
unsigned int var_19 = 375855976U;
unsigned int var_20 = 177194955U;
signed char var_21 = (signed char)-90;
long long int var_22 = 4250109721542442222LL;
unsigned int var_23 = 3053360484U;
long long int var_24 = 7946747034035655980LL;
unsigned int var_25 = 1720650420U;
short var_26 = (short)-333;
unsigned char var_27 = (unsigned char)63;
unsigned short arr_2 [14] ;
unsigned char arr_6 [25] ;
unsigned short arr_7 [25] [25] ;
int arr_10 [19] [19] ;
_Bool arr_14 [19] [19] [19] [19] ;
int arr_16 [19] [19] [19] [19] ;
unsigned short arr_19 [19] [19] ;
int arr_20 [19] [19] [19] [19] [19] [19] [19] ;
short arr_23 [24] ;
short arr_29 [24] [24] [24] [24] [24] [24] ;
int arr_31 [24] [24] [24] [24] ;
short arr_32 [24] [24] ;
long long int arr_3 [14] ;
short arr_21 [19] [19] [19] [19] [19] [19] [19] ;
long long int arr_37 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)3309;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)34340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 176576827;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1945567537;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)40422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -790061050;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (short)8070;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-15093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = -2066454571;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-21608;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -8457541341889414374LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)20120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_37 [i_0] [i_1] = -5134255712057603345LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
