#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 423325830U;
unsigned long long int var_1 = 18066996637918800398ULL;
unsigned int var_2 = 2126249414U;
unsigned int var_4 = 3004169908U;
unsigned int var_6 = 1601879103U;
long long int var_7 = -7379253625622753618LL;
unsigned char var_9 = (unsigned char)70;
unsigned short var_12 = (unsigned short)6720;
int var_13 = 497050482;
unsigned long long int var_14 = 94558331742398802ULL;
unsigned long long int var_16 = 7224090887685958843ULL;
unsigned short var_17 = (unsigned short)16124;
unsigned short var_18 = (unsigned short)63837;
long long int var_19 = -7559305629932752885LL;
int zero = 0;
unsigned long long int var_20 = 6748990861601445388ULL;
short var_21 = (short)-30587;
unsigned short var_22 = (unsigned short)19251;
unsigned char var_23 = (unsigned char)176;
unsigned long long int var_24 = 9781065013993863994ULL;
int var_25 = 1296000340;
unsigned long long int var_26 = 9524898218113907871ULL;
int var_27 = -1692933195;
unsigned short var_28 = (unsigned short)26711;
unsigned char var_29 = (unsigned char)157;
unsigned short var_30 = (unsigned short)46027;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 837205932U;
unsigned char var_33 = (unsigned char)110;
_Bool var_34 = (_Bool)1;
int var_35 = -1967048590;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 2646200782U;
unsigned int var_38 = 1353737101U;
unsigned short var_39 = (unsigned short)10043;
signed char var_40 = (signed char)-94;
unsigned int var_41 = 1199182060U;
unsigned int var_42 = 830816594U;
unsigned long long int var_43 = 8475222684245603377ULL;
unsigned char var_44 = (unsigned char)125;
unsigned char arr_2 [14] [14] ;
int arr_8 [14] [14] [14] ;
short arr_12 [14] [14] [14] [14] [14] ;
unsigned short arr_16 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_20 [14] [14] [14] [14] [14] [14] ;
_Bool arr_25 [16] ;
_Bool arr_26 [16] ;
_Bool arr_27 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2146080929;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)9775 : (short)-21769;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)55852;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1204277590U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
