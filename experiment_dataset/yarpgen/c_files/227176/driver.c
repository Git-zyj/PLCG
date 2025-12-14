#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
signed char var_2 = (signed char)-37;
signed char var_3 = (signed char)-58;
signed char var_4 = (signed char)-116;
signed char var_7 = (signed char)46;
signed char var_8 = (signed char)24;
signed char var_13 = (signed char)-70;
signed char var_16 = (signed char)37;
int zero = 0;
signed char var_19 = (signed char)126;
signed char var_20 = (signed char)-115;
signed char var_21 = (signed char)-81;
signed char var_22 = (signed char)41;
signed char var_23 = (signed char)73;
signed char var_24 = (signed char)-98;
signed char var_25 = (signed char)-97;
signed char arr_1 [17] [17] ;
signed char arr_2 [17] ;
signed char arr_3 [17] [17] ;
signed char arr_4 [17] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
