#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54188;
unsigned short var_3 = (unsigned short)15827;
signed char var_7 = (signed char)105;
unsigned short var_8 = (unsigned short)31974;
signed char var_10 = (signed char)112;
signed char var_12 = (signed char)-84;
unsigned short var_15 = (unsigned short)29316;
int zero = 0;
signed char var_17 = (signed char)70;
unsigned short var_18 = (unsigned short)55240;
signed char var_19 = (signed char)122;
signed char var_20 = (signed char)68;
signed char var_21 = (signed char)0;
signed char arr_0 [15] [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)(-127 - 1);
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
