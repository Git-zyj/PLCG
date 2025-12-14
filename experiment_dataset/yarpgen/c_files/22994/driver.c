#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 238915601;
unsigned int var_1 = 662247493U;
unsigned long long int var_2 = 6943673671723233747ULL;
signed char var_3 = (signed char)-17;
unsigned int var_4 = 1536608426U;
unsigned char var_5 = (unsigned char)54;
long long int var_6 = 3386597327900056093LL;
int var_7 = 1175845378;
unsigned short var_9 = (unsigned short)27933;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)21648;
unsigned short var_13 = (unsigned short)38664;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3778813869763512225ULL;
long long int var_16 = -5962246766034080275LL;
unsigned short var_17 = (unsigned short)34893;
unsigned int var_18 = 1057308331U;
unsigned char var_19 = (unsigned char)204;
unsigned long long int var_20 = 7353918479041820437ULL;
unsigned char var_21 = (unsigned char)129;
int var_22 = 1035360992;
unsigned int var_23 = 243162449U;
unsigned long long int var_24 = 4029784755565340894ULL;
int var_25 = -524012659;
unsigned char var_26 = (unsigned char)222;
_Bool var_27 = (_Bool)0;
unsigned int arr_1 [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned char arr_8 [25] [25] [25] [25] ;
unsigned char arr_11 [25] [25] [25] [25] ;
long long int arr_14 [25] [25] [25] [25] [25] ;
int arr_15 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1620683639U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 17453389368805745783ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 7602460868038494437LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1273146049;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
