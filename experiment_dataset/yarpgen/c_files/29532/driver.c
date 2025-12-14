#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)2419;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1130224750U;
unsigned int var_11 = 3459664439U;
int zero = 0;
signed char var_20 = (signed char)-25;
unsigned int var_21 = 2747733962U;
int var_22 = -1962325981;
signed char var_23 = (signed char)-114;
short var_24 = (short)27349;
signed char var_25 = (signed char)-114;
unsigned int var_26 = 2716542861U;
unsigned long long int var_27 = 17052510799921524681ULL;
unsigned long long int var_28 = 12381814379614216907ULL;
signed char var_29 = (signed char)-115;
signed char var_30 = (signed char)110;
long long int var_31 = 5874075009293784962LL;
unsigned int var_32 = 2849153646U;
long long int var_33 = -5112106906587904036LL;
unsigned char arr_0 [20] ;
short arr_1 [20] [20] ;
int arr_2 [20] [20] ;
signed char arr_5 [20] ;
unsigned int arr_6 [20] ;
int arr_7 [18] ;
signed char arr_8 [18] ;
short arr_9 [10] ;
signed char arr_12 [10] ;
unsigned int arr_13 [10] ;
signed char arr_18 [19] ;
int arr_22 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1615730216;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2931084071U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -1326245048;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-20340;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 4105429959U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -692228560;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
