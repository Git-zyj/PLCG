#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 796788461U;
short var_1 = (short)-21140;
int var_2 = -1391933488;
unsigned int var_4 = 3621051381U;
unsigned int var_7 = 1044005698U;
unsigned char var_10 = (unsigned char)239;
unsigned short var_11 = (unsigned short)29927;
int zero = 0;
signed char var_12 = (signed char)-10;
unsigned long long int var_13 = 16079821906445162904ULL;
unsigned short var_14 = (unsigned short)30046;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)38139;
unsigned short var_17 = (unsigned short)65523;
unsigned long long int var_18 = 16535066220161557613ULL;
signed char var_19 = (signed char)111;
unsigned long long int var_20 = 8394723585776973462ULL;
short var_21 = (short)13158;
unsigned short var_22 = (unsigned short)31650;
unsigned int var_23 = 2890794618U;
long long int var_24 = -5100727332661470046LL;
unsigned long long int arr_0 [14] ;
signed char arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned short arr_4 [14] ;
short arr_5 [14] [14] ;
unsigned int arr_7 [14] [14] [14] [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
signed char arr_9 [14] [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
unsigned long long int arr_12 [14] ;
unsigned int arr_13 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 15198383245147276593ULL : 3744905107029616665ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4124061187U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)34117;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)14479;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 528501758U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3908224900U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-25 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)43565 : (unsigned short)13246;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 13985056583754412315ULL : 11874117563594494416ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2802400479U : 3760321941U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
