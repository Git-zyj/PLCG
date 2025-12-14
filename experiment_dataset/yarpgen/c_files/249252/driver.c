#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2068;
unsigned long long int var_4 = 14845188766689929472ULL;
unsigned long long int var_7 = 18118693883922245460ULL;
int zero = 0;
int var_14 = -949677059;
int var_15 = 619551904;
unsigned int var_16 = 2336948003U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)64892;
int var_19 = -1750714378;
int var_20 = -1015283032;
signed char var_21 = (signed char)43;
unsigned int arr_0 [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] [19] ;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 996434923U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1046090064855580791LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 531491057;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
