#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24839;
signed char var_1 = (signed char)34;
unsigned long long int var_3 = 13729864041768750203ULL;
unsigned long long int var_4 = 11808309353186215331ULL;
unsigned int var_5 = 45193938U;
short var_6 = (short)-3196;
unsigned long long int var_9 = 8455420827926093412ULL;
unsigned int var_14 = 2256425925U;
int zero = 0;
unsigned int var_15 = 710909919U;
short var_16 = (short)-27253;
unsigned int var_17 = 2709452809U;
signed char var_18 = (signed char)35;
short var_19 = (short)-21318;
unsigned long long int var_20 = 3915518331122011797ULL;
unsigned int var_21 = 2944989290U;
_Bool arr_2 [23] [23] ;
unsigned long long int arr_3 [23] ;
signed char arr_6 [25] ;
unsigned long long int arr_4 [23] ;
_Bool arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 10770950241852428214ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 17010272339814686657ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
