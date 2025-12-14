#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19129;
unsigned short var_1 = (unsigned short)33365;
long long int var_2 = 4845845327954194629LL;
unsigned char var_3 = (unsigned char)65;
int var_4 = -563790860;
short var_5 = (short)-9354;
unsigned int var_6 = 1361648510U;
unsigned short var_7 = (unsigned short)45427;
signed char var_8 = (signed char)-14;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12503638631110512228ULL;
unsigned char var_11 = (unsigned char)173;
unsigned short var_12 = (unsigned short)52970;
unsigned char var_14 = (unsigned char)162;
int zero = 0;
signed char var_15 = (signed char)-68;
int var_16 = -1466591926;
unsigned long long int var_17 = 12984505208889073873ULL;
short var_18 = (short)-31682;
short var_19 = (short)15647;
long long int var_20 = -601031333917197251LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 12235123868398704686ULL;
unsigned int var_24 = 2454772198U;
unsigned char var_25 = (unsigned char)67;
unsigned int var_26 = 2568195057U;
unsigned int var_27 = 3520438633U;
long long int var_28 = -4340540774692267830LL;
unsigned int var_29 = 2766380086U;
int var_30 = -2071716937;
long long int var_31 = -1210835261880602826LL;
unsigned char var_32 = (unsigned char)53;
int var_33 = -1406037709;
unsigned long long int var_34 = 10057765052769384439ULL;
short var_35 = (short)5073;
long long int var_36 = 1023233336591959095LL;
_Bool var_37 = (_Bool)1;
long long int var_38 = -3592499754574765760LL;
int var_39 = -1753278567;
_Bool var_40 = (_Bool)1;
unsigned char var_41 = (unsigned char)158;
unsigned int var_42 = 3300018856U;
unsigned char var_43 = (unsigned char)217;
signed char var_44 = (signed char)-92;
_Bool arr_7 [25] [25] [25] ;
int arr_18 [25] [25] ;
unsigned char arr_28 [25] [25] [25] [25] [25] [25] ;
short arr_36 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -1659141094 : -1749538623;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)233 : (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)25794 : (short)-31183;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
