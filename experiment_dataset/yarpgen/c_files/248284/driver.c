#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43904;
unsigned char var_3 = (unsigned char)57;
short var_5 = (short)-13027;
short var_8 = (short)20295;
signed char var_12 = (signed char)-89;
int zero = 0;
signed char var_14 = (signed char)6;
signed char var_15 = (signed char)-65;
_Bool var_16 = (_Bool)1;
int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -2046466987;
}

void checksum() {
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
