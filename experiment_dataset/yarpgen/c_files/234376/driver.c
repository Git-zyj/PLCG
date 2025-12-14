#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned char var_6 = (unsigned char)103;
unsigned long long int var_7 = 10739765393807080512ULL;
unsigned long long int var_8 = 4979883735924393258ULL;
unsigned int var_9 = 2537537221U;
unsigned char var_10 = (unsigned char)41;
long long int var_11 = -6230772877204621601LL;
int zero = 0;
long long int var_12 = -3341320523835590661LL;
unsigned long long int var_13 = 16356726342468192890ULL;
unsigned char var_14 = (unsigned char)142;
int var_15 = 146752695;
long long int var_16 = 1594596870626379439LL;
unsigned long long int arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 15331142743184868804ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 6323831206589548073ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 7276573080325206304ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
