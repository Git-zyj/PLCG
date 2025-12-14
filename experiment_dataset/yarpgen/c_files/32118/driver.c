#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)76;
unsigned char var_3 = (unsigned char)167;
signed char var_4 = (signed char)-105;
unsigned long long int var_5 = 16956809373229445748ULL;
long long int var_7 = 2052597209646785441LL;
unsigned long long int var_8 = 710397326706292256ULL;
long long int var_9 = 8494743882903766135LL;
int var_10 = -1632059627;
short var_11 = (short)2181;
unsigned long long int var_12 = 16333671986521174486ULL;
unsigned long long int var_15 = 6717520319959249611ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
int var_17 = -1718973197;
int var_18 = -1170097696;
_Bool var_19 = (_Bool)1;
long long int arr_0 [16] ;
short arr_3 [16] ;
unsigned char arr_4 [16] [16] ;
unsigned char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5095706820714465108LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-29273;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)211;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
