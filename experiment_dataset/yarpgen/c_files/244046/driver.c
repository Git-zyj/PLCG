#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1364993754U;
int var_1 = 1701881769;
short var_2 = (short)13612;
unsigned short var_4 = (unsigned short)25242;
unsigned int var_5 = 3063725604U;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)27;
unsigned char var_9 = (unsigned char)153;
unsigned short var_10 = (unsigned short)57742;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
unsigned short var_12 = (unsigned short)63444;
unsigned char var_13 = (unsigned char)162;
unsigned int var_14 = 808423765U;
unsigned long long int var_15 = 10909669487894037836ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2639702889U;
signed char arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 11436447617270395191ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)47;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
