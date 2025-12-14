#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26914;
unsigned short var_8 = (unsigned short)17171;
unsigned short var_10 = (unsigned short)46787;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)43826;
short var_21 = (short)6612;
unsigned char var_22 = (unsigned char)98;
signed char var_23 = (signed char)-100;
unsigned long long int arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16515280200308352642ULL : 5293628752612225879ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
