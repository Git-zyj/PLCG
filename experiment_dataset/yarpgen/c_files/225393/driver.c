#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3586943221517310854LL;
unsigned int var_2 = 3064863051U;
unsigned long long int var_3 = 8834165929479288393ULL;
unsigned long long int var_4 = 12018931881704379736ULL;
unsigned long long int var_6 = 13004760396879291240ULL;
unsigned long long int var_7 = 4389775546006708307ULL;
unsigned char var_9 = (unsigned char)83;
unsigned int var_10 = 1361639329U;
unsigned int var_11 = 3882658843U;
unsigned char var_13 = (unsigned char)205;
int zero = 0;
unsigned long long int var_14 = 14674130018682430789ULL;
unsigned char var_15 = (unsigned char)65;
unsigned int var_16 = 3001863704U;
unsigned int arr_0 [18] [18] ;
unsigned long long int arr_7 [23] ;
unsigned long long int arr_11 [23] ;
short arr_5 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 370222101U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 12473304581744043225ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 13199498699379598183ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-13574;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 16863147221305365029ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
