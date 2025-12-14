#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17437803462228032573ULL;
long long int var_1 = -3992740134078714496LL;
unsigned long long int var_2 = 2224595021634728063ULL;
unsigned char var_3 = (unsigned char)251;
unsigned long long int var_5 = 14219430657604634185ULL;
long long int var_6 = -331648100851858229LL;
unsigned long long int var_7 = 13381926957770790891ULL;
unsigned long long int var_8 = 18130699996078162289ULL;
int zero = 0;
long long int var_10 = 4463399173047593742LL;
signed char var_11 = (signed char)-107;
short var_12 = (short)28831;
short var_13 = (short)-7442;
unsigned long long int var_14 = 14130355059010844669ULL;
short arr_1 [23] [23] ;
short arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned char arr_4 [23] ;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)27845;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-10644;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)237 : (unsigned char)32;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
