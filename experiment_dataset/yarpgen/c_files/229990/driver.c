#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned short var_1 = (unsigned short)44289;
short var_2 = (short)24421;
unsigned int var_3 = 3276101641U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-31922;
unsigned int var_9 = 4050182601U;
unsigned short var_10 = (unsigned short)59170;
short var_11 = (short)-29907;
unsigned char var_12 = (unsigned char)235;
unsigned char var_14 = (unsigned char)50;
long long int var_15 = 1353418745891628454LL;
short var_16 = (short)-20050;
unsigned char var_17 = (unsigned char)97;
int zero = 0;
unsigned short var_18 = (unsigned short)27201;
unsigned long long int var_19 = 4340791107120227326ULL;
signed char var_20 = (signed char)0;
unsigned short var_21 = (unsigned short)51356;
signed char var_22 = (signed char)-70;
short arr_0 [19] [19] ;
int arr_1 [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22703;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -902886608;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2521263350703106231LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
