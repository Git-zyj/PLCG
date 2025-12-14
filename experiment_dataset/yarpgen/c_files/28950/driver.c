#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13208440252402672083ULL;
unsigned long long int var_5 = 6790471892029645196ULL;
unsigned long long int var_6 = 17552552570803215066ULL;
unsigned long long int var_8 = 5079554676246465155ULL;
unsigned long long int var_9 = 4853518096717883481ULL;
unsigned long long int var_10 = 9594819529071521110ULL;
unsigned long long int var_11 = 6941415942236970233ULL;
unsigned long long int var_14 = 269061765581914730ULL;
unsigned long long int var_16 = 747988597568790325ULL;
int zero = 0;
unsigned long long int var_17 = 16520934683509606108ULL;
unsigned long long int var_18 = 14351666745679527490ULL;
unsigned long long int var_19 = 3449555893929155703ULL;
unsigned long long int var_20 = 11299083597717281125ULL;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_6 [15] [15] [15] ;
unsigned long long int arr_7 [15] [15] ;
unsigned long long int arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4978421650501204332ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17697770848949693964ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 11334636894654501930ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 5794021076512701572ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
