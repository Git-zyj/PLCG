#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-65;
signed char var_6 = (signed char)113;
signed char var_8 = (signed char)124;
signed char var_9 = (signed char)-124;
signed char var_10 = (signed char)19;
signed char var_14 = (signed char)37;
signed char var_15 = (signed char)91;
signed char var_16 = (signed char)81;
signed char var_18 = (signed char)-27;
signed char var_19 = (signed char)41;
int zero = 0;
signed char var_20 = (signed char)63;
signed char var_21 = (signed char)11;
signed char var_22 = (signed char)125;
signed char var_23 = (signed char)-18;
signed char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)24 : (signed char)124;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
