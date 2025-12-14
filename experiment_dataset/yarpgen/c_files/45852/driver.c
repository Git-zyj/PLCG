#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4746;
unsigned short var_2 = (unsigned short)3766;
int var_3 = 1489017971;
int var_5 = -1880452594;
signed char var_8 = (signed char)-57;
unsigned short var_12 = (unsigned short)203;
short var_13 = (short)-32523;
unsigned int var_14 = 2519647994U;
int zero = 0;
signed char var_16 = (signed char)37;
short var_17 = (short)929;
int var_18 = -1880497692;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-11946;
signed char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-33;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
