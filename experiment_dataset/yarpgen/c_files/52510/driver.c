#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)-93;
signed char var_2 = (signed char)83;
signed char var_6 = (signed char)72;
signed char var_8 = (signed char)-10;
signed char var_10 = (signed char)124;
signed char var_11 = (signed char)-126;
signed char var_13 = (signed char)-40;
int zero = 0;
signed char var_17 = (signed char)-23;
signed char var_18 = (signed char)-24;
signed char var_19 = (signed char)19;
signed char var_20 = (signed char)26;
signed char var_21 = (signed char)88;
signed char arr_0 [12] ;
signed char arr_2 [12] [12] ;
signed char arr_4 [12] [12] [12] ;
signed char arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-77;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
