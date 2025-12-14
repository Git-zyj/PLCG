#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3487205752308630057LL;
unsigned int var_3 = 3347883148U;
unsigned int var_4 = 1395837319U;
unsigned int var_5 = 178463736U;
signed char var_7 = (signed char)-88;
unsigned int var_8 = 2236828714U;
unsigned int var_9 = 2005519192U;
int zero = 0;
unsigned int var_14 = 2314668192U;
unsigned long long int var_15 = 9667260456370840703ULL;
unsigned long long int var_16 = 5073995837109667927ULL;
unsigned int var_17 = 3045164638U;
unsigned short var_18 = (unsigned short)34548;
unsigned int var_19 = 3047784442U;
unsigned short arr_0 [10] ;
unsigned char arr_5 [10] [10] [10] ;
unsigned char arr_6 [14] ;
unsigned int arr_9 [14] [14] ;
unsigned long long int arr_13 [14] ;
unsigned int arr_15 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)61596;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1083349489U : 1055223690U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 16417294165109812797ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1585113533U : 2098103506U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
