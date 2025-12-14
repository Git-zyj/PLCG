#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19335;
unsigned int var_8 = 1447712591U;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
unsigned short var_11 = (unsigned short)33666;
unsigned int arr_3 [17] [17] ;
int arr_4 [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1080564552U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1679548021;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 4024590073U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
