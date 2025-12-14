#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15237;
unsigned long long int var_5 = 18180630982708312128ULL;
short var_8 = (short)9926;
unsigned long long int var_11 = 17174223841281935689ULL;
unsigned char var_14 = (unsigned char)70;
unsigned int var_15 = 933907949U;
int zero = 0;
unsigned long long int var_17 = 10078486802578080034ULL;
unsigned char var_18 = (unsigned char)94;
unsigned char var_19 = (unsigned char)88;
unsigned char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)6;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
