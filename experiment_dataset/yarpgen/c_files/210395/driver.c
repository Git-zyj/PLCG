#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
signed char var_2 = (signed char)118;
short var_6 = (short)4828;
signed char var_9 = (signed char)65;
int zero = 0;
signed char var_14 = (signed char)119;
unsigned char var_15 = (unsigned char)36;
unsigned int var_16 = 1717670817U;
short var_17 = (short)-20149;
unsigned long long int var_18 = 10018158003025467707ULL;
short var_19 = (short)6694;
signed char var_20 = (signed char)2;
int var_21 = 1492388746;
unsigned long long int arr_1 [18] [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 14547430931293791612ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-69;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
