#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7533120107366666927ULL;
long long int var_1 = 1432356992864814905LL;
unsigned long long int var_2 = 10687541128860445992ULL;
unsigned long long int var_3 = 17297970254453076399ULL;
unsigned long long int var_4 = 14373042189871024417ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)63;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3836702628181253613ULL;
long long int var_9 = 6290527849131911256LL;
int zero = 0;
unsigned long long int var_10 = 9185817212012804135ULL;
unsigned long long int var_11 = 13290628386000127306ULL;
unsigned char var_12 = (unsigned char)106;
int var_13 = -2022270573;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1659815161228969824LL;
unsigned long long int var_17 = 18375359004927646368ULL;
long long int var_18 = 4369779008585829726LL;
unsigned char var_19 = (unsigned char)23;
unsigned int var_20 = 642493277U;
unsigned long long int var_21 = 9687013391983567046ULL;
long long int var_22 = -5654962568570499206LL;
int var_23 = 131101502;
int var_24 = -794340830;
short var_25 = (short)-29834;
int var_26 = -523133643;
signed char var_27 = (signed char)35;
unsigned char var_28 = (unsigned char)12;
unsigned long long int var_29 = 503110729525466969ULL;
unsigned long long int var_30 = 3406195272455730358ULL;
unsigned long long int var_31 = 5576557672116749166ULL;
unsigned char var_32 = (unsigned char)94;
long long int var_33 = -8813230876667421231LL;
_Bool var_34 = (_Bool)0;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned char arr_3 [11] ;
int arr_7 [10] [10] ;
_Bool arr_8 [10] [10] [10] ;
unsigned char arr_9 [10] ;
_Bool arr_11 [10] [10] ;
unsigned char arr_16 [10] [10] ;
_Bool arr_35 [10] ;
unsigned int arr_17 [10] [10] [10] ;
unsigned long long int arr_33 [10] [10] [10] [10] [10] ;
unsigned long long int arr_34 [10] [10] [10] [10] ;
unsigned char arr_44 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3487186711U : 1404186788U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 336290591U : 771044131U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -1742430246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1135644608U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 17638839385543359958ULL : 579775395701259023ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13865282868249486073ULL : 14440498295689461276ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)15;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
