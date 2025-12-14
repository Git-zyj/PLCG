#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5536;
unsigned char var_5 = (unsigned char)113;
unsigned char var_11 = (unsigned char)219;
unsigned long long int var_12 = 11061841394591123662ULL;
int var_14 = 727789772;
unsigned int var_18 = 510447399U;
int zero = 0;
short var_19 = (short)-20441;
int var_20 = -1348510417;
unsigned int var_21 = 2628867340U;
unsigned long long int var_22 = 10216588827586934117ULL;
unsigned long long int var_23 = 10501930116631252793ULL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)245;
int var_26 = -204812245;
unsigned long long int var_27 = 6180107169737537327ULL;
int var_28 = 1155628662;
unsigned short arr_1 [25] ;
int arr_6 [25] [25] [25] ;
unsigned char arr_14 [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
unsigned int arr_18 [11] ;
unsigned int arr_9 [25] ;
short arr_21 [11] [11] [11] ;
unsigned int arr_25 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)11838;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -296997730;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 13681345712993498782ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 2830727754U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 2628226307U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-29024 : (short)-29806;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 2786487051U : 3861424458U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
