#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28188;
int var_2 = -1632837406;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-119;
unsigned int var_9 = 573134060U;
signed char var_12 = (signed char)40;
int var_15 = 1541884711;
int var_18 = -868260192;
int zero = 0;
short var_19 = (short)-4091;
long long int var_20 = -5254741454387098161LL;
long long int var_21 = 1074920146292890080LL;
unsigned char var_22 = (unsigned char)237;
long long int var_23 = -4187733096253141204LL;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)31200;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
