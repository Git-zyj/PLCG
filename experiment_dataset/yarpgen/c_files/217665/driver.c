#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 8343642695167302587ULL;
unsigned char var_4 = (unsigned char)32;
unsigned long long int var_5 = 3113242219753312906ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 16924658425574265525ULL;
unsigned char var_10 = (unsigned char)84;
int var_11 = -223289033;
unsigned char var_12 = (unsigned char)72;
unsigned long long int var_13 = 15668244378481468371ULL;
int zero = 0;
unsigned long long int var_16 = 661028061155318370ULL;
unsigned long long int var_17 = 3318337085556034054ULL;
unsigned long long int var_18 = 6288618335458654696ULL;
unsigned long long int var_19 = 10286826406363328203ULL;
int var_20 = 1581210816;
unsigned char var_21 = (unsigned char)201;
int var_22 = 1522946450;
int var_23 = 61822973;
unsigned char arr_2 [25] ;
unsigned long long int arr_3 [25] ;
int arr_5 [25] [25] ;
int arr_7 [25] [25] [25] ;
unsigned long long int arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5825647836321562744ULL : 11416262126911534622ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1821361806;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 31556414 : 1333528697;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8883656645738020665ULL : 11096052538834097788ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
