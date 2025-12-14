#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 28288356;
unsigned short var_1 = (unsigned short)49079;
short var_2 = (short)-14376;
int var_3 = 1970180892;
signed char var_4 = (signed char)63;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_7 = (short)4963;
short var_8 = (short)-21086;
int var_9 = -1663258083;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)8761;
_Bool var_13 = (_Bool)1;
int var_14 = 1657883410;
unsigned long long int var_15 = 11626393414747880558ULL;
int zero = 0;
int var_16 = 1179266782;
long long int var_17 = 4215521581900197671LL;
int var_18 = 982846666;
unsigned long long int var_19 = 11613126677434265351ULL;
unsigned short var_20 = (unsigned short)55480;
short var_21 = (short)15038;
unsigned short var_22 = (unsigned short)39654;
short var_23 = (short)-32373;
short var_24 = (short)-7903;
unsigned char var_25 = (unsigned char)146;
long long int var_26 = 1848871183376178252LL;
short var_27 = (short)25647;
unsigned long long int var_28 = 15652366806273174415ULL;
unsigned long long int var_29 = 12461914991327379694ULL;
unsigned int var_30 = 3454370522U;
long long int var_31 = -1257806590752112192LL;
unsigned int var_32 = 3935531572U;
short var_33 = (short)-23527;
short var_34 = (short)7188;
unsigned long long int var_35 = 11054699380860266182ULL;
unsigned int var_36 = 4124606962U;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 11366854439478408939ULL;
unsigned char var_39 = (unsigned char)25;
unsigned char var_40 = (unsigned char)67;
unsigned int var_41 = 523807914U;
int var_42 = -154416916;
unsigned int var_43 = 3241863478U;
unsigned short var_44 = (unsigned short)48584;
unsigned long long int var_45 = 1157410748732802253ULL;
unsigned short var_46 = (unsigned short)16246;
unsigned long long int var_47 = 6991392956624469858ULL;
unsigned long long int var_48 = 11589330823838127775ULL;
unsigned long long int var_49 = 15705349761999320700ULL;
unsigned int var_50 = 3619907379U;
unsigned int var_51 = 3610331185U;
unsigned char var_52 = (unsigned char)156;
unsigned int var_53 = 3375124249U;
_Bool var_54 = (_Bool)0;
unsigned char arr_1 [20] [20] ;
short arr_2 [20] [20] ;
short arr_7 [20] [20] [20] ;
short arr_8 [20] [20] [20] ;
short arr_9 [20] [20] [20] [20] ;
short arr_11 [20] [20] ;
long long int arr_15 [20] [20] [20] [20] [20] ;
int arr_17 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_21 [20] [20] [20] [20] [20] [20] ;
short arr_23 [20] [20] ;
unsigned short arr_24 [20] [20] [20] [20] ;
signed char arr_25 [20] ;
short arr_28 [20] [20] [20] [20] [20] [20] [20] ;
long long int arr_45 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-4164;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)21701;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)22223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-15757;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5410 : (short)-2218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 2659565634972044621LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1024259261;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 952874332U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (short)30445;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)15949 : (unsigned short)10182;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-25498;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1292352523727416080LL;
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
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
