#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
long long int var_2 = -3620409902283272813LL;
unsigned int var_3 = 1547511022U;
signed char var_5 = (signed char)-28;
unsigned char var_7 = (unsigned char)92;
unsigned short var_8 = (unsigned short)26377;
short var_9 = (short)-7171;
int zero = 0;
unsigned short var_10 = (unsigned short)22717;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)63367;
unsigned long long int var_13 = 2804104596886193831ULL;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_15 = 16375683578601238656ULL;
signed char arr_0 [16] [16] ;
signed char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-37;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
