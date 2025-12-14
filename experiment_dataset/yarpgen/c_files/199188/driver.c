#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -689545532;
short var_3 = (short)10899;
unsigned char var_5 = (unsigned char)178;
_Bool var_7 = (_Bool)0;
short var_11 = (short)8868;
int zero = 0;
int var_13 = 976875422;
unsigned char var_14 = (unsigned char)160;
int var_15 = 699363653;
_Bool var_16 = (_Bool)0;
unsigned char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)192;
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
