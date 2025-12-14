#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned long long int var_2 = 5947647651973167971ULL;
unsigned char var_3 = (unsigned char)220;
unsigned char var_4 = (unsigned char)74;
unsigned long long int var_5 = 5652558195406079250ULL;
unsigned int var_6 = 3363447452U;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = -1897532386;
unsigned long long int var_11 = 12357834145891940605ULL;
int var_12 = -14066809;
unsigned int var_13 = 2087111535U;
unsigned char var_14 = (unsigned char)205;
_Bool arr_0 [12] ;
unsigned char arr_2 [12] [12] [12] ;
unsigned long long int arr_3 [12] ;
unsigned char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 17509143759613444015ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)98;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
