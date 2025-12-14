#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1850325706;
unsigned int var_3 = 2070547498U;
unsigned long long int var_6 = 12327198573419759150ULL;
unsigned char var_8 = (unsigned char)41;
signed char var_9 = (signed char)-112;
long long int var_10 = -4908235119532444881LL;
int zero = 0;
unsigned short var_12 = (unsigned short)52933;
unsigned long long int var_13 = 17063758499795071639ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12055705275941840087ULL;
int var_16 = 1748237156;
long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
long long int arr_3 [13] [13] ;
short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1008124676678218533LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1045400826U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 960862979892923630ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8544588746557409742ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -8613856183318002054LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)685 : (short)16122;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
