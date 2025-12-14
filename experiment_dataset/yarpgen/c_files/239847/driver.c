#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17136063733456562734ULL;
long long int var_1 = 8481027605164991146LL;
int var_2 = -1547022125;
unsigned long long int var_3 = 2479950046696171688ULL;
unsigned char var_5 = (unsigned char)72;
signed char var_7 = (signed char)34;
long long int var_8 = 3315762952922295912LL;
signed char var_15 = (signed char)106;
int zero = 0;
unsigned char var_16 = (unsigned char)38;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)42201;
short var_19 = (short)28011;
short var_20 = (short)13623;
unsigned long long int arr_0 [23] ;
int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14505258679425374190ULL : 16985922547082769419ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1130753563 : -128140641;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
