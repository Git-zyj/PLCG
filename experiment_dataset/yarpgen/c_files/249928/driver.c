#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25040;
unsigned int var_5 = 1974366072U;
long long int var_6 = -2737589300283006381LL;
short var_7 = (short)20083;
unsigned short var_9 = (unsigned short)34959;
int var_10 = 1245285536;
unsigned char var_11 = (unsigned char)30;
int zero = 0;
unsigned int var_12 = 810152660U;
unsigned short var_13 = (unsigned short)40499;
long long int var_14 = -2277954133354640444LL;
long long int var_15 = -2080102396470602858LL;
short var_16 = (short)12825;
unsigned long long int var_17 = 6237334819871448607ULL;
unsigned char arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned int arr_5 [17] ;
unsigned long long int arr_6 [17] ;
unsigned int arr_8 [17] ;
short arr_10 [17] [17] [17] ;
unsigned char arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19909 : (unsigned short)33219;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2677655896U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6062358091861889281ULL : 4575003821101613783ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 559371725U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-14245 : (short)4850;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)247;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
