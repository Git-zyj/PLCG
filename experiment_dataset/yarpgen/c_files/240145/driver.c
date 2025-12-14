#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1896120463;
unsigned long long int var_1 = 9769557265725168340ULL;
unsigned char var_3 = (unsigned char)16;
long long int var_5 = -6149233095970111366LL;
signed char var_8 = (signed char)94;
int var_9 = -171928581;
unsigned short var_10 = (unsigned short)40066;
int zero = 0;
unsigned long long int var_11 = 14014608560092421158ULL;
long long int var_12 = -6391520530588840955LL;
long long int var_13 = -5432379083647823388LL;
unsigned short var_14 = (unsigned short)65369;
unsigned short var_15 = (unsigned short)38196;
unsigned short var_16 = (unsigned short)43021;
int var_17 = 967798482;
int var_18 = 1486321011;
unsigned char var_19 = (unsigned char)15;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 337687001076507992ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 9485549906640640078ULL;
unsigned short var_24 = (unsigned short)61047;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)202;
long long int var_27 = 881574174438706407LL;
long long int var_28 = 5872558294628773984LL;
long long int var_29 = 8347574275872535128LL;
int var_30 = 711364815;
signed char var_31 = (signed char)-23;
long long int var_32 = 5023957261577655715LL;
unsigned char arr_1 [23] ;
signed char arr_2 [23] ;
int arr_3 [23] ;
int arr_4 [23] [23] [23] ;
unsigned long long int arr_5 [23] ;
long long int arr_6 [23] ;
_Bool arr_8 [23] [23] ;
_Bool arr_12 [23] [23] ;
int arr_19 [23] ;
unsigned char arr_20 [23] [23] [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_27 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -2112491720;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1436742902;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3826437372486127240ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 7689185600414002251LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 1068924668;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 7348679928902023869LL : -1741785082186482993LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (unsigned char)5;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
