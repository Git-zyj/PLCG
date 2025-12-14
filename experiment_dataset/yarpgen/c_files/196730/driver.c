#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11277559586707770079ULL;
signed char var_2 = (signed char)87;
unsigned short var_5 = (unsigned short)9909;
int var_8 = 904767832;
long long int var_12 = -7024879212081471313LL;
unsigned short var_15 = (unsigned short)65011;
unsigned short var_16 = (unsigned short)54037;
int zero = 0;
signed char var_18 = (signed char)-73;
signed char var_19 = (signed char)-105;
unsigned long long int var_20 = 7674348151472680436ULL;
signed char var_21 = (signed char)-55;
unsigned long long int var_22 = 3767253856587996344ULL;
long long int var_23 = -1439706123158164666LL;
signed char var_24 = (signed char)13;
signed char arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
signed char arr_4 [15] [15] [15] ;
signed char arr_8 [15] [15] [15] [15] [15] ;
signed char arr_9 [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)10210;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1194468306751100771LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
