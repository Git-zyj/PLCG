#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2957357933U;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)11998;
long long int var_10 = -2417421215970655302LL;
unsigned int var_16 = 1639674592U;
int zero = 0;
unsigned char var_17 = (unsigned char)63;
unsigned int var_18 = 2415338594U;
unsigned int var_19 = 4102375312U;
short var_20 = (short)-30599;
short var_21 = (short)-4854;
unsigned char arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
unsigned int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)64664;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1926744906U;
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
