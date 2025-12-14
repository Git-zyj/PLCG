#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)41;
short var_4 = (short)-8267;
unsigned char var_5 = (unsigned char)236;
unsigned int var_7 = 1236004997U;
unsigned long long int var_11 = 17521180877122376980ULL;
long long int var_18 = -1512244224587018742LL;
int zero = 0;
long long int var_19 = -1192725304840855554LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)87;
unsigned short var_22 = (unsigned short)14502;
unsigned char var_23 = (unsigned char)236;
_Bool arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2445967374U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2204186913U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
