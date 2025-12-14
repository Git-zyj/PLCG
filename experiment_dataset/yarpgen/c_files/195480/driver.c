#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5956039613183217002LL;
signed char var_1 = (signed char)89;
long long int var_2 = -446977115620393610LL;
unsigned int var_3 = 2738262803U;
int var_4 = 302719372;
unsigned int var_5 = 2856584298U;
long long int var_6 = 2234132128182008339LL;
unsigned int var_7 = 1464357288U;
unsigned short var_8 = (unsigned short)47712;
_Bool var_9 = (_Bool)1;
int var_10 = 103112840;
long long int var_11 = 9187753095949396311LL;
unsigned long long int var_12 = 16697907935782416842ULL;
int var_13 = 1211149087;
int zero = 0;
long long int var_14 = 7179992624519672527LL;
unsigned short var_15 = (unsigned short)42247;
int var_16 = -728384771;
short var_17 = (short)-7385;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)106;
unsigned short var_20 = (unsigned short)27344;
unsigned int var_21 = 3600360807U;
int var_22 = -1808633615;
unsigned long long int var_23 = 6215459219065111850ULL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)7821;
unsigned int var_26 = 2694144082U;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)4906;
unsigned long long int var_30 = 16281731204528347204ULL;
signed char var_31 = (signed char)19;
unsigned long long int var_32 = 10921270926119274794ULL;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-2441;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)5672;
int var_37 = -342532747;
unsigned long long int var_38 = 13425639412673949436ULL;
_Bool var_39 = (_Bool)0;
int var_40 = 139570339;
short var_41 = (short)8954;
unsigned long long int var_42 = 29243636207153753ULL;
int arr_20 [14] [14] [14] [14] [14] ;
unsigned int arr_37 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1493797056 : 760627750;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_37 [i_0] [i_1] = 1249330280U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
