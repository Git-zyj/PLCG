#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13297;
signed char var_2 = (signed char)119;
unsigned long long int var_3 = 13719572346854681306ULL;
unsigned char var_4 = (unsigned char)171;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11108053137667348010ULL;
unsigned int var_8 = 3657576689U;
unsigned char var_9 = (unsigned char)20;
unsigned int var_11 = 735281856U;
int zero = 0;
int var_12 = -735285381;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8622116896718794308LL;
int var_15 = 1288563926;
unsigned long long int var_16 = 17670839871667827241ULL;
signed char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
_Bool arr_3 [10] ;
int arr_2 [10] ;
unsigned short arr_6 [10] [10] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 16790557046118296294ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1617717381;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24457 : (unsigned short)21423;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)82;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
