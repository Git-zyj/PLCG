#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3554890699797507930LL;
short var_3 = (short)-16294;
long long int var_4 = -7263984389317083375LL;
int var_5 = 1004459857;
long long int var_6 = -8665388881075660690LL;
_Bool var_7 = (_Bool)0;
int var_8 = -813215332;
unsigned char var_10 = (unsigned char)117;
long long int var_12 = -6223888369892643099LL;
short var_13 = (short)23399;
int zero = 0;
long long int var_14 = -2363939675583496514LL;
unsigned char var_15 = (unsigned char)140;
int var_16 = -23542694;
long long int var_17 = -5751535717933580207LL;
long long int var_18 = -7651699648865998894LL;
int arr_1 [25] ;
short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -32288140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22259;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
