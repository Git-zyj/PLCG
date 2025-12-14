#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2300963397U;
signed char var_2 = (signed char)-43;
unsigned int var_3 = 100765878U;
signed char var_4 = (signed char)124;
unsigned short var_5 = (unsigned short)41080;
unsigned long long int var_8 = 4387233221009382519ULL;
int var_9 = -92681696;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)119;
unsigned int var_12 = 4035288893U;
signed char var_13 = (signed char)4;
unsigned int var_14 = 636957843U;
long long int var_15 = 504650363188434461LL;
unsigned char var_16 = (unsigned char)96;
unsigned int var_17 = 2762854651U;
unsigned char var_18 = (unsigned char)24;
unsigned short arr_0 [14] [14] ;
int arr_1 [14] [14] ;
_Bool arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
int arr_4 [14] [14] ;
signed char arr_7 [17] [17] ;
signed char arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7402;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -807817141;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1439680766;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-110;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
