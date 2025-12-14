#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29415;
unsigned short var_2 = (unsigned short)62260;
unsigned short var_4 = (unsigned short)44747;
unsigned short var_5 = (unsigned short)5073;
unsigned short var_6 = (unsigned short)62816;
unsigned short var_11 = (unsigned short)50632;
unsigned short var_14 = (unsigned short)12337;
int zero = 0;
unsigned short var_15 = (unsigned short)20818;
unsigned short var_16 = (unsigned short)33564;
unsigned short var_17 = (unsigned short)36690;
unsigned short var_18 = (unsigned short)11869;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)16736;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
