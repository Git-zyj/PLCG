#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41996;
short var_6 = (short)20880;
unsigned char var_7 = (unsigned char)185;
long long int var_8 = -1206083109324182995LL;
int var_9 = -948091286;
long long int var_12 = -7522399001890874235LL;
short var_13 = (short)-4545;
unsigned long long int var_15 = 15263374870646043698ULL;
short var_16 = (short)8710;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
unsigned short var_18 = (unsigned short)28605;
unsigned long long int var_19 = 6024141436482011856ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3139882759788214270ULL;
unsigned long long int var_22 = 17221009374530863395ULL;
signed char var_23 = (signed char)-38;
unsigned char var_24 = (unsigned char)216;
long long int var_25 = 2644239874768533097LL;
unsigned long long int arr_2 [19] [19] ;
unsigned char arr_3 [19] [19] ;
unsigned long long int arr_8 [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
short arr_10 [19] [19] ;
long long int arr_11 [19] ;
short arr_7 [19] ;
_Bool arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 10049698482428869974ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 2161636511103747612ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3794501408112432733ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-25400;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 3428768612320345574LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)19121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
