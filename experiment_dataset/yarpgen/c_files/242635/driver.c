#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15206463487201236896ULL;
unsigned int var_1 = 4027041306U;
unsigned char var_5 = (unsigned char)84;
unsigned int var_6 = 473585268U;
unsigned short var_7 = (unsigned short)31851;
signed char var_9 = (signed char)47;
unsigned short var_10 = (unsigned short)29541;
unsigned long long int var_12 = 14211538806171676610ULL;
int zero = 0;
long long int var_13 = -2861824056212574265LL;
int var_14 = -1882415852;
unsigned int arr_0 [12] ;
int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
signed char arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned short arr_5 [12] ;
unsigned int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1523866332U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1348558168;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1282446202U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54146 : (unsigned short)40770;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1581723536U : 721793888U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
