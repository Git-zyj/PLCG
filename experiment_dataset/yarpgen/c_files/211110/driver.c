#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -120382563001046097LL;
signed char var_1 = (signed char)-115;
unsigned long long int var_4 = 3491060592843864868ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)58611;
long long int var_9 = 1090918661776691410LL;
unsigned short var_12 = (unsigned short)46648;
long long int var_14 = 5494446021203588982LL;
short var_16 = (short)13113;
unsigned short var_17 = (unsigned short)36137;
int zero = 0;
short var_18 = (short)17581;
_Bool var_19 = (_Bool)1;
int var_20 = -1494304608;
unsigned long long int var_21 = 1007143772756281746ULL;
signed char arr_0 [19] ;
unsigned long long int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 3542894056432288841ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
