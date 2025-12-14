#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29746;
long long int var_4 = 1887683373421358234LL;
unsigned short var_17 = (unsigned short)19281;
int zero = 0;
long long int var_20 = 4654203969383481453LL;
unsigned long long int var_21 = 4635676849415841560ULL;
short var_22 = (short)23217;
long long int var_23 = -8967912579586657847LL;
unsigned int var_24 = 3954021854U;
unsigned char var_25 = (unsigned char)17;
short arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-13192;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
