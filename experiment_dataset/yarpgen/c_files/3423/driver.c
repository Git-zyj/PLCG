#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17678;
signed char var_1 = (signed char)-57;
unsigned long long int var_2 = 3790930364537210422ULL;
unsigned short var_3 = (unsigned short)64317;
unsigned int var_4 = 70835689U;
signed char var_8 = (signed char)76;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)12;
unsigned long long int var_14 = 5232053486906551468ULL;
unsigned char var_15 = (unsigned char)169;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1495584767U;
unsigned short var_18 = (unsigned short)51737;
long long int var_19 = 2769767630683453146LL;
unsigned long long int var_20 = 10545719658728850430ULL;
unsigned int var_21 = 1599105380U;
unsigned char var_22 = (unsigned char)114;
unsigned long long int var_23 = 9602691728722776408ULL;
unsigned long long int var_24 = 17119606243787397451ULL;
int var_25 = -2078878025;
int arr_1 [22] ;
short arr_2 [22] [22] [22] ;
short arr_3 [22] [22] ;
int arr_16 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 210795314;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)22497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-6001;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = -1557158981;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
