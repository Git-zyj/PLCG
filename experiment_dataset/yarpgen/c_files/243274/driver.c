#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)21;
long long int var_3 = 6179475147032638007LL;
long long int var_4 = -4489213908277759445LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2188600168U;
long long int var_7 = -881472993725392538LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = 1247184667;
unsigned int var_11 = 898436751U;
long long int var_12 = -6586215234252963348LL;
unsigned int var_13 = 4002858178U;
unsigned short var_14 = (unsigned short)2869;
unsigned short var_15 = (unsigned short)5486;
unsigned short var_16 = (unsigned short)45948;
unsigned short var_17 = (unsigned short)23197;
int zero = 0;
long long int var_18 = 1030123555125317225LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15948247372327116792ULL;
signed char var_21 = (signed char)-120;
long long int var_22 = 1547852037295075988LL;
signed char var_23 = (signed char)13;
int var_24 = 2103895409;
long long int var_25 = 984260838476059805LL;
long long int var_26 = 8712903008640149794LL;
unsigned short var_27 = (unsigned short)9191;
long long int var_28 = 6291196192041182063LL;
unsigned short var_29 = (unsigned short)50512;
unsigned int var_30 = 1027930166U;
long long int var_31 = -6185890264062857882LL;
int var_32 = -278245012;
unsigned short var_33 = (unsigned short)60205;
unsigned short var_34 = (unsigned short)31101;
unsigned int var_35 = 501419006U;
_Bool var_36 = (_Bool)1;
signed char var_37 = (signed char)23;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)0;
short var_40 = (short)-32365;
signed char var_41 = (signed char)-30;
int var_42 = -1460695950;
unsigned short var_43 = (unsigned short)11875;
_Bool var_44 = (_Bool)1;
short var_45 = (short)-29091;
short var_46 = (short)-9281;
unsigned long long int var_47 = 16918270176547147804ULL;
unsigned short arr_7 [24] ;
int arr_33 [12] [12] [12] ;
int arr_40 [12] [12] ;
_Bool arr_41 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19293 : (unsigned short)30354;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2041962429 : -1415912653;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? -2006140523 : 550768515;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
