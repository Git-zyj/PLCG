#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2947084621395537840LL;
unsigned short var_1 = (unsigned short)7876;
short var_4 = (short)32363;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_12 = 721217837;
int zero = 0;
unsigned char var_13 = (unsigned char)18;
short var_14 = (short)25806;
unsigned short var_15 = (unsigned short)60513;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)28913;
unsigned short arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)6213 : (unsigned short)2319;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
