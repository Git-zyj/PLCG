#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21392;
signed char var_4 = (signed char)3;
unsigned int var_5 = 115928704U;
short var_7 = (short)31089;
long long int var_9 = 1176273883507023881LL;
unsigned short var_11 = (unsigned short)37945;
long long int var_13 = -2855554762982795168LL;
unsigned int var_15 = 3985238463U;
signed char var_16 = (signed char)15;
int zero = 0;
unsigned short var_18 = (unsigned short)54160;
short var_19 = (short)14164;
long long int var_20 = -5452978374683515707LL;
signed char var_21 = (signed char)-76;
long long int var_22 = -7818189806518159050LL;
long long int var_23 = -5832502779156771392LL;
unsigned int var_24 = 837437732U;
int var_25 = -1614404813;
short var_26 = (short)31946;
short arr_0 [21] ;
short arr_1 [21] [21] ;
long long int arr_3 [19] [19] ;
long long int arr_4 [19] ;
int arr_2 [21] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)7587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-29457;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -6933904476558732329LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1888397711413786861LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -2136627108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 8453120658238381828LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
