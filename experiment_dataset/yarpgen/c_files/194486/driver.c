#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3413904996911437747ULL;
signed char var_3 = (signed char)(-127 - 1);
short var_8 = (short)-17289;
long long int var_11 = -1663518319579628062LL;
int zero = 0;
unsigned int var_14 = 649836443U;
unsigned long long int var_15 = 6016131865877672056ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)82;
int arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 479494191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 888345466U : 2488445653U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 13956191290559844273ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 4242521314U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
