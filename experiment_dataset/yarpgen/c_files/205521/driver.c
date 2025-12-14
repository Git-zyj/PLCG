#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24409;
unsigned short var_2 = (unsigned short)11030;
int var_5 = -1494981865;
unsigned long long int var_9 = 5069020134353187470ULL;
unsigned long long int var_11 = 7348745509555115216ULL;
int var_14 = 623715435;
int zero = 0;
int var_16 = -1134518948;
long long int var_17 = -6564032574332564654LL;
unsigned short var_18 = (unsigned short)47054;
long long int var_19 = -529468149331814869LL;
unsigned long long int var_20 = 6605328252657442264ULL;
long long int var_21 = -4192415305579507975LL;
unsigned short arr_0 [15] ;
long long int arr_1 [15] [15] ;
unsigned short arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3215 : (unsigned short)52223;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3019907182431042847LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22393 : (unsigned short)20108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37153 : (unsigned short)26838;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
