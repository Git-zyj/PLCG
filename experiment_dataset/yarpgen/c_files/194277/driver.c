#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
signed char var_2 = (signed char)51;
signed char var_3 = (signed char)-105;
int var_4 = 728070391;
short var_5 = (short)26721;
int var_8 = -1751346465;
unsigned char var_9 = (unsigned char)13;
short var_10 = (short)6326;
short var_11 = (short)12259;
short var_12 = (short)-10760;
signed char var_13 = (signed char)-104;
signed char var_14 = (signed char)7;
int var_15 = -1598560421;
int var_16 = 1874779294;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
unsigned char var_18 = (unsigned char)136;
signed char var_19 = (signed char)-79;
signed char var_20 = (signed char)59;
short var_21 = (short)-10063;
signed char var_22 = (signed char)22;
unsigned char var_23 = (unsigned char)15;
signed char var_24 = (signed char)-49;
signed char arr_1 [11] [11] ;
signed char arr_3 [11] ;
short arr_7 [11] [11] ;
int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)11432;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 666926278;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
