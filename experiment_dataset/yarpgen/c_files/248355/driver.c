#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 2945924207U;
unsigned short var_4 = (unsigned short)37313;
unsigned int var_5 = 1588677399U;
short var_7 = (short)-23824;
signed char var_8 = (signed char)32;
signed char var_9 = (signed char)-97;
int zero = 0;
unsigned long long int var_12 = 13180618917378048728ULL;
unsigned short var_13 = (unsigned short)19426;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-111;
unsigned short var_16 = (unsigned short)31168;
signed char var_17 = (signed char)79;
long long int arr_0 [21] ;
unsigned short arr_4 [21] [21] [21] ;
long long int arr_5 [21] [21] [21] ;
signed char arr_6 [21] [21] [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2022433896979812352LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)5166;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -3169418029533613752LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
