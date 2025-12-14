#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50113;
long long int var_2 = -8532053040967054166LL;
unsigned char var_4 = (unsigned char)146;
unsigned char var_5 = (unsigned char)146;
signed char var_6 = (signed char)94;
unsigned long long int var_10 = 15615507876046677028ULL;
long long int var_14 = -8972516020011333721LL;
int zero = 0;
unsigned char var_15 = (unsigned char)250;
unsigned short var_16 = (unsigned short)18472;
signed char var_17 = (signed char)34;
unsigned short var_18 = (unsigned short)36564;
long long int var_19 = -281926094575477054LL;
long long int var_20 = -1064270771496270043LL;
unsigned short arr_2 [22] ;
long long int arr_3 [22] ;
long long int arr_4 [22] ;
unsigned short arr_5 [22] ;
long long int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)26573;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -6620833156831875577LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4582973180950433220LL : 1782193075376159121LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28706 : (unsigned short)21565;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -2421773886694099910LL : 451420680652262883LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
