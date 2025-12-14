#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
signed char var_2 = (signed char)-39;
signed char var_3 = (signed char)40;
signed char var_4 = (signed char)120;
signed char var_6 = (signed char)-92;
signed char var_7 = (signed char)126;
unsigned char var_8 = (unsigned char)182;
unsigned char var_10 = (unsigned char)138;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned char var_14 = (unsigned char)58;
signed char var_15 = (signed char)-80;
unsigned char arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)124;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
