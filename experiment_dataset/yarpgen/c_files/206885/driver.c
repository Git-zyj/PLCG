#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27776;
signed char var_5 = (signed char)42;
signed char var_7 = (signed char)112;
unsigned short var_10 = (unsigned short)5849;
int zero = 0;
short var_16 = (short)-3877;
int var_17 = -1259743177;
signed char var_18 = (signed char)118;
unsigned short var_19 = (unsigned short)21996;
unsigned short var_20 = (unsigned short)56331;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 154290932;
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
