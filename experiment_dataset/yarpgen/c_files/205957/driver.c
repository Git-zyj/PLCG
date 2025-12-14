#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
long long int var_1 = 2754596600457735818LL;
unsigned long long int var_2 = 13121408526097237488ULL;
unsigned char var_3 = (unsigned char)118;
unsigned char var_4 = (unsigned char)74;
unsigned char var_5 = (unsigned char)232;
unsigned long long int var_6 = 5563660942540154003ULL;
unsigned char var_7 = (unsigned char)188;
long long int var_9 = 2090406651680022346LL;
long long int var_10 = -7959314087452073617LL;
unsigned short var_11 = (unsigned short)17010;
unsigned short var_12 = (unsigned short)29826;
long long int var_13 = -8726204534420005221LL;
unsigned short var_14 = (unsigned short)49793;
int zero = 0;
signed char var_15 = (signed char)120;
signed char var_16 = (signed char)94;
unsigned long long int var_17 = 9826254312132017857ULL;
unsigned long long int var_18 = 12646852732067909119ULL;
unsigned char var_19 = (unsigned char)160;
signed char var_20 = (signed char)-85;
unsigned long long int var_21 = 17747974279472272307ULL;
unsigned short var_22 = (unsigned short)44264;
unsigned char var_23 = (unsigned char)253;
unsigned short var_24 = (unsigned short)1884;
signed char var_25 = (signed char)80;
signed char var_26 = (signed char)-123;
unsigned short var_27 = (unsigned short)17788;
signed char var_28 = (signed char)47;
unsigned long long int var_29 = 5162379260071246451ULL;
unsigned long long int var_30 = 8662903564848484999ULL;
signed char var_31 = (signed char)-39;
long long int var_32 = -5286257131822156748LL;
long long int var_33 = -3444099011148253372LL;
unsigned short var_34 = (unsigned short)7495;
long long int var_35 = 1971605906416848889LL;
signed char var_36 = (signed char)35;
long long int var_37 = -7860708491449120109LL;
unsigned char var_38 = (unsigned char)57;
long long int var_39 = -4700840501324151437LL;
unsigned char var_40 = (unsigned char)53;
unsigned short var_41 = (unsigned short)2450;
unsigned long long int var_42 = 2180093797252389487ULL;
unsigned long long int var_43 = 12734608008766660000ULL;
unsigned short var_44 = (unsigned short)43050;
unsigned short arr_0 [16] ;
long long int arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
signed char arr_3 [16] [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
unsigned char arr_7 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] [16] [16] ;
signed char arr_10 [16] [16] [16] ;
unsigned char arr_13 [16] [16] [16] [16] ;
unsigned long long int arr_14 [16] [16] ;
unsigned long long int arr_17 [16] [16] [16] [16] [16] ;
unsigned short arr_29 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_30 [16] [16] [16] ;
unsigned char arr_23 [16] ;
unsigned char arr_24 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)28756;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 8572722108360227620LL : -3335984726189934676LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13742679205614710349ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 11695546844916640724ULL : 8367719865428124438ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 17925632021196093685ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-37 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 4876855437903466069ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 11026429782944816042ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)50570;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)18 : (unsigned char)229;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
