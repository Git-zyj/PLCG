#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5970618749691361451LL;
unsigned int var_2 = 4048924409U;
unsigned short var_3 = (unsigned short)3906;
long long int var_4 = 8915506040893613673LL;
int var_5 = 850729435;
unsigned int var_6 = 2332335421U;
long long int var_7 = 7580360124833134324LL;
unsigned char var_8 = (unsigned char)154;
int var_9 = 1655838329;
unsigned char var_11 = (unsigned char)172;
int var_12 = 959850926;
int zero = 0;
int var_13 = -853949736;
long long int var_14 = 5831209555635481477LL;
unsigned long long int var_15 = 258416950431576032ULL;
signed char var_16 = (signed char)-95;
int var_17 = 1159839702;
int arr_1 [19] ;
unsigned int arr_5 [19] [19] ;
unsigned char arr_9 [19] [19] [19] ;
signed char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1644306278;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3912315042U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)16;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
