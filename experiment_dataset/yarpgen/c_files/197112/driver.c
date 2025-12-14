#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11611698861992007974ULL;
short var_1 = (short)4230;
unsigned long long int var_2 = 11454991730779122168ULL;
unsigned long long int var_4 = 943201491284478493ULL;
unsigned short var_7 = (unsigned short)16892;
int var_8 = -2584222;
int var_10 = -1023066076;
long long int var_13 = -7077973420089475905LL;
int zero = 0;
int var_14 = 164677063;
int var_15 = -652734748;
int var_16 = 873336843;
long long int var_17 = 7913221784834789046LL;
unsigned char var_18 = (unsigned char)10;
int arr_2 [23] [23] ;
long long int arr_4 [23] ;
long long int arr_5 [23] ;
long long int arr_6 [23] [23] [23] ;
int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1864099050;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 924801695115163558LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 90044051139875031LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3482011558411812682LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 483155094;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
