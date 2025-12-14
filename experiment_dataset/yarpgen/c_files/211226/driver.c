#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16675095855992403355ULL;
int var_4 = -37692574;
long long int var_5 = 2003578097525915032LL;
signed char var_6 = (signed char)-26;
unsigned short var_8 = (unsigned short)29269;
unsigned long long int var_9 = 11867728472263107167ULL;
int zero = 0;
long long int var_10 = 7331862730989247717LL;
unsigned int var_11 = 2771505755U;
int var_12 = -1125957884;
long long int arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
int arr_3 [12] ;
unsigned short arr_4 [12] [12] ;
int arr_5 [12] [12] ;
unsigned char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 4964661005172220651LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 200721353;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)26833;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -1311998475;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
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
