#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)126;
unsigned char var_9 = (unsigned char)78;
unsigned char var_10 = (unsigned char)3;
unsigned char var_13 = (unsigned char)187;
unsigned char var_16 = (unsigned char)108;
unsigned char var_19 = (unsigned char)57;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
unsigned char var_21 = (unsigned char)8;
unsigned char var_22 = (unsigned char)2;
unsigned char var_23 = (unsigned char)226;
unsigned char var_24 = (unsigned char)30;
unsigned char var_25 = (unsigned char)132;
unsigned char arr_0 [18] [18] ;
unsigned char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)7 : (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
