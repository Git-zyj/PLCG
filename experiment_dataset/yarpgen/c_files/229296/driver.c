#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)7957;
long long int var_4 = 270190200033701981LL;
unsigned short var_5 = (unsigned short)32952;
unsigned char var_10 = (unsigned char)79;
unsigned short var_11 = (unsigned short)18259;
unsigned short var_13 = (unsigned short)31876;
int zero = 0;
unsigned int var_17 = 886880624U;
long long int var_18 = -9189033118442817405LL;
long long int var_19 = 4372145283510678448LL;
_Bool arr_0 [20] [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32380 : (unsigned short)29483;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
