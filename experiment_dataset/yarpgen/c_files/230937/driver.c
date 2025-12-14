#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12919;
short var_1 = (short)28012;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)56;
short var_9 = (short)13204;
int zero = 0;
short var_10 = (short)-19759;
unsigned long long int var_11 = 10723391865155919976ULL;
short var_12 = (short)-1771;
long long int var_13 = 5791295199866266235LL;
unsigned long long int var_14 = 13571453797636895276ULL;
short var_15 = (short)-29554;
unsigned short arr_0 [24] ;
signed char arr_1 [24] ;
_Bool arr_3 [10] [10] ;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)32695;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)18084;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
