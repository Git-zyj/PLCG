#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
signed char var_1 = (signed char)-119;
signed char var_2 = (signed char)(-127 - 1);
signed char var_6 = (signed char)46;
signed char var_9 = (signed char)79;
signed char var_10 = (signed char)-64;
signed char var_11 = (signed char)13;
signed char var_12 = (signed char)69;
signed char var_13 = (signed char)58;
signed char var_17 = (signed char)-93;
signed char var_18 = (signed char)-14;
signed char var_19 = (signed char)0;
int zero = 0;
signed char var_20 = (signed char)-113;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)81;
signed char var_23 = (signed char)10;
signed char var_24 = (signed char)68;
signed char var_25 = (signed char)126;
signed char var_26 = (signed char)117;
signed char var_27 = (signed char)-52;
signed char arr_0 [15] ;
signed char arr_1 [15] [15] ;
signed char arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)-19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)24;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
