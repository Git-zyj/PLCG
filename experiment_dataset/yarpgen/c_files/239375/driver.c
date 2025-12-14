#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8651306550723900879ULL;
signed char var_2 = (signed char)56;
unsigned long long int var_6 = 10105261463265630597ULL;
unsigned long long int var_7 = 14441009309946044430ULL;
int var_8 = -622148646;
short var_10 = (short)30542;
unsigned int var_11 = 733605650U;
unsigned char var_12 = (unsigned char)209;
short var_13 = (short)-25626;
unsigned char var_14 = (unsigned char)98;
int zero = 0;
unsigned int var_16 = 1719542908U;
unsigned int var_17 = 1210590991U;
unsigned short var_18 = (unsigned short)15018;
unsigned char var_19 = (unsigned char)207;
int var_20 = 131269319;
long long int var_21 = -3723462655160517166LL;
signed char var_22 = (signed char)35;
signed char arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_3 [10] [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
unsigned short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2921658024U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8114845216594372799LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)50939 : (unsigned short)39500;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)27635;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
