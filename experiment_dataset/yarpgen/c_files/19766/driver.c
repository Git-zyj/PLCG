#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9022;
signed char var_6 = (signed char)-65;
signed char var_9 = (signed char)-23;
int var_10 = 1841489138;
short var_11 = (short)-10417;
unsigned int var_12 = 2464813928U;
signed char var_17 = (signed char)72;
int zero = 0;
unsigned short var_19 = (unsigned short)36326;
short var_20 = (short)17507;
unsigned short var_21 = (unsigned short)63851;
unsigned short var_22 = (unsigned short)58135;
unsigned short var_23 = (unsigned short)38239;
signed char arr_0 [20] [20] ;
unsigned int arr_3 [20] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1287799139U : 661701212U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -661424612 : -1087763847;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
