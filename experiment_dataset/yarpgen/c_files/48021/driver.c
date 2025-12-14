#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
signed char var_2 = (signed char)-110;
signed char var_3 = (signed char)59;
signed char var_4 = (signed char)77;
signed char var_7 = (signed char)-96;
signed char var_8 = (signed char)73;
int zero = 0;
signed char var_13 = (signed char)-6;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)72;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)-67;
}

void checksum() {
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
