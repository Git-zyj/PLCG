#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42730;
unsigned int var_2 = 3996365852U;
unsigned short var_5 = (unsigned short)53266;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1108874289U;
unsigned int var_10 = 217477359U;
unsigned char var_11 = (unsigned char)65;
unsigned short var_12 = (unsigned short)40148;
long long int var_13 = 7461645108740620529LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6277;
short var_17 = (short)-31502;
unsigned short var_18 = (unsigned short)63514;
signed char var_19 = (signed char)-115;
short arr_0 [25] ;
unsigned int arr_1 [25] ;
int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)20757;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2566469496U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1596505897 : -2047963969;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
