#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 893790438U;
signed char var_2 = (signed char)47;
int var_6 = -1487568303;
unsigned char var_14 = (unsigned char)188;
int var_17 = -879098985;
int zero = 0;
int var_18 = 155131078;
signed char var_19 = (signed char)-116;
unsigned char var_20 = (unsigned char)177;
int var_21 = -2124270728;
unsigned char var_22 = (unsigned char)49;
unsigned long long int var_23 = 16284584627865116235ULL;
unsigned short var_24 = (unsigned short)3547;
unsigned short var_25 = (unsigned short)22559;
signed char var_26 = (signed char)-35;
unsigned int var_27 = 1082149278U;
unsigned long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned char arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
unsigned char arr_5 [13] ;
unsigned char arr_9 [21] [21] ;
unsigned short arr_10 [21] ;
signed char arr_11 [21] ;
signed char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 13126989551688851976ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-1234;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)43889;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-114 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)-17;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
