#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12566834398298264214ULL;
unsigned char var_1 = (unsigned char)121;
unsigned int var_2 = 1912175374U;
short var_3 = (short)3325;
short var_5 = (short)13988;
unsigned long long int var_6 = 15454577839129977346ULL;
unsigned long long int var_7 = 13616569434251245806ULL;
long long int var_8 = 5053284765591811735LL;
int zero = 0;
unsigned char var_10 = (unsigned char)24;
long long int var_11 = -6999680289375819898LL;
signed char var_12 = (signed char)62;
unsigned long long int var_13 = 16787227115300121801ULL;
unsigned short var_14 = (unsigned short)8993;
unsigned short var_15 = (unsigned short)28875;
short arr_1 [10] ;
short arr_9 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned long long int arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-30248;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)23218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3036916787U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 3707534152111726227ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
