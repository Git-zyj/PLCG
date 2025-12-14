#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)4;
int var_3 = -322448296;
long long int var_4 = 8397557764435824524LL;
long long int var_5 = -3242470616926339475LL;
unsigned short var_7 = (unsigned short)62454;
long long int var_10 = 820092849296515080LL;
unsigned char var_11 = (unsigned char)250;
unsigned char var_14 = (unsigned char)66;
int zero = 0;
signed char var_17 = (signed char)3;
unsigned short var_18 = (unsigned short)37410;
unsigned short var_19 = (unsigned short)16734;
unsigned char var_20 = (unsigned char)72;
_Bool var_21 = (_Bool)0;
unsigned char arr_10 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
