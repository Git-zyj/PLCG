#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)108;
unsigned short var_4 = (unsigned short)24261;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)18964;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)29041;
unsigned short var_12 = (unsigned short)10889;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_14 = 17014254959190571844ULL;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)5343;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
