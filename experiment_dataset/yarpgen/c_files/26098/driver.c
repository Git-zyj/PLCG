#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2631833602U;
unsigned long long int var_5 = 15607929804398458271ULL;
signed char var_6 = (signed char)87;
int var_8 = 1641209333;
unsigned short var_9 = (unsigned short)13865;
unsigned long long int var_10 = 12205127022639019126ULL;
signed char var_11 = (signed char)41;
unsigned char var_15 = (unsigned char)41;
unsigned int var_16 = 2496891193U;
unsigned short var_18 = (unsigned short)42191;
int zero = 0;
unsigned int var_20 = 3517538654U;
unsigned int var_21 = 331002943U;
int var_22 = 598482977;
signed char var_23 = (signed char)-20;
_Bool arr_6 [12] [12] [12] ;
long long int arr_12 [24] ;
signed char arr_13 [24] ;
int arr_11 [12] ;
int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -7752799069268561896LL : 4345653805986277597LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -1082427604;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -931776719 : 1352083621;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
