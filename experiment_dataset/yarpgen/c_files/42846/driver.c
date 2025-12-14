#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
int var_10 = -1413341088;
unsigned char var_14 = (unsigned char)167;
unsigned long long int var_15 = 11784552325729203258ULL;
int zero = 0;
int var_17 = -1140450745;
unsigned char var_18 = (unsigned char)108;
unsigned short var_19 = (unsigned short)29823;
short var_20 = (short)-28582;
int var_21 = -1672391266;
signed char arr_1 [12] ;
long long int arr_2 [12] [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 867595661248020598LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -211614903;
}

void checksum() {
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
