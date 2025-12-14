#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned int var_1 = 3242015296U;
signed char var_2 = (signed char)-11;
unsigned int var_3 = 2006106617U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2266725066183596846ULL;
unsigned long long int var_7 = 15842159521764454582ULL;
int var_9 = -712318931;
int zero = 0;
unsigned int var_10 = 2089970660U;
unsigned long long int var_11 = 16376495555511696214ULL;
int var_12 = -1764204829;
long long int var_13 = -4815932234506541317LL;
int var_14 = 441789364;
unsigned short arr_0 [15] ;
unsigned int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)24995;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 3993572822U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
