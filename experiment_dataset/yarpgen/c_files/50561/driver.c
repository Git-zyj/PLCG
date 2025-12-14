#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -82275887;
unsigned long long int var_4 = 17586974992227330298ULL;
int var_5 = 1719828197;
long long int var_7 = -8479402339834701797LL;
signed char var_9 = (signed char)-20;
unsigned long long int var_11 = 15360630331148721164ULL;
unsigned int var_13 = 106262858U;
short var_17 = (short)-14075;
int zero = 0;
unsigned long long int var_19 = 9442048925086965536ULL;
signed char var_20 = (signed char)95;
long long int var_21 = 6162491130243926820LL;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
int arr_2 [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 12985412981852057510ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 13373598371946728332ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1311534322;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)10065;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
