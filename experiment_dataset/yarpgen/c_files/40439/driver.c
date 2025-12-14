#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27361;
unsigned long long int var_1 = 1211321068691862594ULL;
unsigned short var_2 = (unsigned short)37656;
int var_4 = 2112732434;
unsigned char var_5 = (unsigned char)52;
int var_6 = 2022077007;
signed char var_7 = (signed char)33;
unsigned int var_11 = 2552549683U;
int var_17 = -161097092;
signed char var_18 = (signed char)102;
int zero = 0;
signed char var_19 = (signed char)100;
unsigned char var_20 = (unsigned char)86;
unsigned long long int var_21 = 4600966582044505240ULL;
unsigned short var_22 = (unsigned short)63461;
unsigned int var_23 = 3939373830U;
long long int var_24 = -2528250088046144867LL;
unsigned long long int var_25 = 13618704326690617071ULL;
int arr_0 [10] ;
unsigned int arr_2 [10] [10] [10] ;
unsigned char arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1769580064;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1996209062U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2738623545U : 3321699607U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
