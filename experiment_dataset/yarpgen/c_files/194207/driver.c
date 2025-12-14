#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23151;
short var_1 = (short)11794;
short var_2 = (short)-21865;
long long int var_3 = 4030895768498006076LL;
unsigned char var_4 = (unsigned char)163;
short var_5 = (short)5968;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)27;
signed char var_9 = (signed char)44;
int var_10 = 2085010586;
unsigned short var_11 = (unsigned short)36232;
unsigned char var_12 = (unsigned char)75;
unsigned long long int var_13 = 7238944990859458326ULL;
short var_14 = (short)30826;
signed char var_15 = (signed char)76;
unsigned int var_16 = 1721157728U;
int zero = 0;
unsigned long long int var_17 = 10194412166925707860ULL;
short var_18 = (short)27080;
short var_19 = (short)11061;
short var_20 = (short)25812;
short var_21 = (short)-11633;
unsigned short var_22 = (unsigned short)52588;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)216;
unsigned char var_25 = (unsigned char)99;
int var_26 = 1757723756;
unsigned long long int var_27 = 16949272907514695218ULL;
long long int var_28 = 8164231975252229375LL;
short var_29 = (short)-20111;
unsigned short var_30 = (unsigned short)12053;
short var_31 = (short)22795;
short var_32 = (short)29711;
unsigned int var_33 = 3584152193U;
short var_34 = (short)4883;
short var_35 = (short)-23754;
int var_36 = -1955910803;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
unsigned long long int arr_5 [24] ;
unsigned char arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
short arr_10 [25] ;
unsigned int arr_11 [25] ;
unsigned short arr_17 [15] ;
unsigned long long int arr_21 [18] ;
unsigned short arr_25 [16] ;
unsigned short arr_26 [16] [16] ;
short arr_27 [16] ;
unsigned short arr_29 [16] ;
short arr_30 [16] [16] ;
unsigned short arr_31 [16] [16] [16] ;
unsigned short arr_33 [16] ;
short arr_34 [16] [16] ;
_Bool arr_35 [16] [16] [16] [16] ;
unsigned short arr_38 [16] [16] ;
unsigned short arr_2 [17] ;
int arr_8 [24] ;
long long int arr_9 [24] ;
short arr_12 [25] [25] ;
unsigned int arr_23 [18] ;
unsigned char arr_24 [18] ;
signed char arr_37 [16] [16] [16] [16] ;
unsigned short arr_40 [16] [16] [16] [16] ;
_Bool arr_41 [16] [16] ;
short arr_42 [16] [16] [16] [16] [16] [16] ;
short arr_47 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 3721317442U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 6451351601824175844ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 2715740128473693419ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)24657;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 223680485U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)53951;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 6055649375054869663ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (unsigned short)19844;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)37374;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (short)-14469;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (unsigned short)14315;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (short)-1691;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)1562;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = (unsigned short)16636;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = (short)9030;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)63010;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)51200;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -251556896;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 6651859547808687231LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (short)11944;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 1568637669U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned short)628;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_41 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-17128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = (short)-31512;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
