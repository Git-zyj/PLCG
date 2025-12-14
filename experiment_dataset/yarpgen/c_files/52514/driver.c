#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16671781106017962005ULL;
long long int var_5 = 5827521117255328511LL;
unsigned long long int var_6 = 9270417071800627182ULL;
int var_9 = -785976185;
short var_10 = (short)26687;
signed char var_11 = (signed char)43;
signed char var_12 = (signed char)-100;
signed char var_13 = (signed char)-47;
int zero = 0;
short var_14 = (short)-10418;
unsigned short var_15 = (unsigned short)30225;
signed char var_16 = (signed char)58;
long long int var_17 = -4388918542247996437LL;
long long int arr_0 [16] [16] ;
signed char arr_1 [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -3079047443405038517LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -583538134;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
