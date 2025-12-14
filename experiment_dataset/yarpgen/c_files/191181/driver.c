#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-29;
short var_7 = (short)-19011;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-83;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-86;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-46;
signed char var_16 = (signed char)-6;
signed char var_17 = (signed char)121;
signed char arr_0 [10] ;
signed char arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)22;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
