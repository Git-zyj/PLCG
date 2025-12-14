#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 758830722U;
unsigned int var_1 = 3139401000U;
unsigned short var_4 = (unsigned short)42939;
unsigned short var_6 = (unsigned short)56384;
long long int var_7 = -6786517390682280496LL;
unsigned short var_8 = (unsigned short)42006;
unsigned short var_10 = (unsigned short)10525;
long long int var_11 = 8881140798979755505LL;
unsigned int var_12 = 951165541U;
unsigned short var_14 = (unsigned short)3211;
int zero = 0;
unsigned short var_16 = (unsigned short)43723;
unsigned short var_17 = (unsigned short)51563;
unsigned short var_18 = (unsigned short)19518;
long long int var_19 = 2300492739171720661LL;
long long int var_20 = -3139771261425435541LL;
int var_21 = 1199483016;
unsigned short var_22 = (unsigned short)47892;
unsigned short var_23 = (unsigned short)33725;
long long int arr_1 [25] ;
int arr_3 [25] ;
unsigned short arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -5133668414314498058LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -191548750;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26276;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
