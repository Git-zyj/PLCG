#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3626690136U;
unsigned int var_2 = 3606448206U;
unsigned int var_3 = 1864024359U;
unsigned int var_6 = 1979540219U;
_Bool var_7 = (_Bool)0;
int var_8 = 342932011;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3500963798U;
int var_11 = -1082755298;
unsigned short var_12 = (unsigned short)14704;
int var_13 = 39659388;
unsigned int var_14 = 2503309507U;
unsigned int var_15 = 1875855793U;
int var_16 = 131656694;
unsigned int arr_2 [17] [17] ;
short arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 460089769U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-12058 : (short)10648;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 299584563U : 1823402521U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
