#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 40626213U;
unsigned int var_1 = 163917752U;
unsigned int var_2 = 874303745U;
unsigned int var_3 = 449591628U;
signed char var_4 = (signed char)-19;
signed char var_5 = (signed char)-39;
signed char var_12 = (signed char)28;
signed char var_13 = (signed char)-67;
signed char var_14 = (signed char)72;
unsigned int var_16 = 4017883389U;
int zero = 0;
signed char var_18 = (signed char)-24;
signed char var_19 = (signed char)22;
signed char var_20 = (signed char)-124;
unsigned int var_21 = 282484454U;
unsigned int var_22 = 1999077366U;
signed char arr_4 [10] ;
signed char arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)85;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
