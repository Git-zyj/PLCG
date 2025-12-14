#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned long long int var_3 = 7759180332687955398ULL;
unsigned short var_6 = (unsigned short)63647;
unsigned int var_10 = 3837957655U;
int zero = 0;
short var_11 = (short)-15674;
unsigned long long int var_12 = 11158317576357855031ULL;
signed char var_13 = (signed char)-78;
unsigned char var_14 = (unsigned char)41;
int var_15 = 640889976;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)64482;
}

void checksum() {
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
