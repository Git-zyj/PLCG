#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -695461112;
unsigned short var_1 = (unsigned short)17614;
unsigned int var_3 = 2828421397U;
int var_7 = -704727922;
int var_8 = -142320529;
unsigned long long int var_9 = 10560825239632729458ULL;
int var_13 = 225397712;
signed char var_14 = (signed char)-31;
unsigned long long int var_16 = 16187005811073453606ULL;
int zero = 0;
short var_17 = (short)15760;
unsigned long long int var_18 = 6006678506400070309ULL;
short var_19 = (short)5713;
int var_20 = 830973828;
unsigned short var_21 = (unsigned short)50094;
short var_22 = (short)-10760;
short var_23 = (short)25011;
int var_24 = 909581589;
int arr_0 [25] ;
_Bool arr_1 [25] ;
int arr_2 [25] [25] [25] ;
_Bool arr_3 [25] [25] [25] ;
_Bool arr_6 [25] [25] ;
int arr_7 [25] ;
unsigned char arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1889523242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1836284198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 1661828718;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 121942886403392008ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
