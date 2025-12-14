#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned long long int var_1 = 18147863621014897550ULL;
signed char var_2 = (signed char)120;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)233;
short var_6 = (short)-15761;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)212;
unsigned int var_10 = 2209267771U;
int zero = 0;
unsigned long long int var_11 = 7058425395561425427ULL;
unsigned int var_12 = 2672213366U;
signed char var_13 = (signed char)112;
long long int var_14 = -6289710244393993294LL;
signed char var_15 = (signed char)-48;
signed char var_16 = (signed char)-103;
unsigned short var_17 = (unsigned short)64190;
long long int arr_2 [19] ;
unsigned long long int arr_8 [24] [24] ;
signed char arr_9 [24] ;
signed char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -891641210279801431LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 14147366217420559154ULL : 2267883975678135059ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)82 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)-44;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
