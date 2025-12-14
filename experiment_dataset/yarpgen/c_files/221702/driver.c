#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
signed char var_3 = (signed char)87;
signed char var_5 = (signed char)10;
unsigned long long int var_6 = 8519956257317279512ULL;
unsigned char var_7 = (unsigned char)11;
signed char var_9 = (signed char)-85;
int var_11 = 1206809156;
unsigned int var_13 = 3094463493U;
unsigned char var_14 = (unsigned char)2;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned long long int var_16 = 15344238138576303250ULL;
unsigned char var_17 = (unsigned char)238;
signed char var_18 = (signed char)-81;
long long int var_19 = 2719558585823786238LL;
long long int var_20 = -626276108912595708LL;
signed char arr_0 [10] ;
unsigned char arr_1 [10] ;
signed char arr_2 [10] ;
signed char arr_3 [10] ;
unsigned char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)89 : (unsigned char)108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
