#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned short var_1 = (unsigned short)37839;
int var_2 = -1559592643;
long long int var_3 = 6831053052885757676LL;
short var_5 = (short)23574;
unsigned int var_7 = 1981668740U;
unsigned short var_8 = (unsigned short)22049;
long long int var_9 = -1898305013377518533LL;
unsigned char var_10 = (unsigned char)53;
int var_11 = -1305339558;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1342248560;
unsigned int var_14 = 667367314U;
unsigned char var_15 = (unsigned char)248;
short var_16 = (short)8524;
unsigned short arr_0 [20] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)13195;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56296;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
