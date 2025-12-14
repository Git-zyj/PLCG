#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61316;
unsigned short var_3 = (unsigned short)49749;
unsigned short var_5 = (unsigned short)19946;
unsigned short var_7 = (unsigned short)35900;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)26123;
int zero = 0;
short var_19 = (short)7229;
short var_20 = (short)23561;
short var_21 = (short)25036;
_Bool var_22 = (_Bool)0;
short arr_1 [22] [22] ;
unsigned short arr_3 [22] [22] ;
short arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16193 : (short)-11208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25705 : (unsigned short)39900;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)9487;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
