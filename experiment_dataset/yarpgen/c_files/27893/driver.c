#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
unsigned char var_2 = (unsigned char)77;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)218;
unsigned int var_5 = 124795710U;
signed char var_6 = (signed char)57;
unsigned long long int var_8 = 2495458248450194210ULL;
signed char var_9 = (signed char)43;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)67;
unsigned char var_16 = (unsigned char)13;
int zero = 0;
unsigned char var_18 = (unsigned char)35;
signed char var_19 = (signed char)99;
unsigned long long int var_20 = 12303434038001766194ULL;
unsigned short var_21 = (unsigned short)50632;
unsigned long long int var_22 = 577420413151538066ULL;
unsigned long long int var_23 = 13898764969585709750ULL;
long long int var_24 = -8711743248261091956LL;
signed char var_25 = (signed char)-96;
unsigned char var_26 = (unsigned char)239;
unsigned char arr_0 [10] ;
signed char arr_1 [10] ;
signed char arr_3 [10] [10] ;
unsigned char arr_5 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 14828449564433510975ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)162;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
