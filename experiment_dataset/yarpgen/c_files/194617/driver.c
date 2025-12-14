#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned int var_1 = 3143975216U;
unsigned int var_3 = 716014506U;
unsigned int var_4 = 2105636159U;
unsigned int var_7 = 4247689147U;
unsigned char var_9 = (unsigned char)99;
unsigned int var_10 = 1370132635U;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
unsigned int var_13 = 2539970569U;
unsigned int var_14 = 3136823169U;
unsigned int var_15 = 2836694506U;
unsigned int var_16 = 333604275U;
unsigned int var_17 = 1426822033U;
unsigned int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned char arr_5 [24] [24] [24] ;
unsigned int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3000798208U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2998365064U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4084171988U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
