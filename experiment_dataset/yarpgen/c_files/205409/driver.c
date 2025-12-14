#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51166;
unsigned char var_3 = (unsigned char)134;
unsigned short var_4 = (unsigned short)19190;
int var_6 = -2132138649;
signed char var_10 = (signed char)21;
int zero = 0;
int var_12 = 2067168872;
unsigned short var_13 = (unsigned short)64554;
unsigned short var_14 = (unsigned short)57107;
short arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14881;
}

void checksum() {
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
