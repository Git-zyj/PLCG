#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24464;
unsigned short var_1 = (unsigned short)10337;
long long int var_4 = 6428390803346977359LL;
long long int var_5 = 5193855515808216744LL;
long long int var_6 = 5714971833990003946LL;
unsigned short var_7 = (unsigned short)2987;
signed char var_11 = (signed char)74;
unsigned short var_12 = (unsigned short)48708;
int zero = 0;
unsigned long long int var_13 = 17140603191987176588ULL;
int var_14 = -1912953990;
unsigned int var_15 = 502253713U;
unsigned short var_16 = (unsigned short)36464;
unsigned char var_17 = (unsigned char)229;
long long int var_18 = 3663977263482378339LL;
int arr_4 [21] ;
unsigned short arr_6 [22] ;
int arr_8 [22] ;
short arr_10 [22] ;
short arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 597277038;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)43730;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1281423818 : 1962893688;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-29197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19336 : (short)24941;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
