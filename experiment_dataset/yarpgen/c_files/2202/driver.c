#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23787;
signed char var_6 = (signed char)65;
unsigned int var_7 = 3785548918U;
unsigned char var_8 = (unsigned char)124;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned int var_20 = 4200556000U;
signed char var_21 = (signed char)-7;
signed char var_22 = (signed char)45;
unsigned long long int var_23 = 14565793763273783991ULL;
unsigned int var_24 = 774796028U;
signed char var_25 = (signed char)31;
unsigned char var_26 = (unsigned char)205;
int var_27 = -1943417359;
unsigned char arr_0 [10] [10] ;
unsigned long long int arr_2 [10] ;
short arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13061665453235119203ULL : 16898353625704065651ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)11692;
}

void checksum() {
    hash(&seed, var_19);
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
