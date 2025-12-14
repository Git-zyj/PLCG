#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
long long int var_4 = -2884955860763396065LL;
long long int var_6 = -2700244519467708131LL;
unsigned short var_9 = (unsigned short)3332;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)43056;
int zero = 0;
long long int var_16 = -6960804774824543155LL;
short var_17 = (short)15676;
unsigned char var_18 = (unsigned char)75;
long long int var_19 = 3682996886103181500LL;
unsigned long long int var_20 = 13776936431027344532ULL;
int var_21 = 431356230;
unsigned long long int arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
short arr_2 [19] ;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 17919893264907110144ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)12920;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 7803640984629568728LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
