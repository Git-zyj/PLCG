#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5658135921020040832ULL;
unsigned char var_1 = (unsigned char)168;
short var_2 = (short)24134;
signed char var_3 = (signed char)-88;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)83;
long long int var_6 = 977854687174673452LL;
unsigned long long int var_7 = 8157119104498450290ULL;
unsigned short var_8 = (unsigned short)30537;
unsigned char var_9 = (unsigned char)240;
int zero = 0;
unsigned int var_11 = 3103154972U;
unsigned long long int var_12 = 3903458775280172358ULL;
short var_13 = (short)9786;
short var_14 = (short)-23034;
long long int var_15 = -6153866458137380476LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-64;
unsigned short var_18 = (unsigned short)60539;
unsigned long long int arr_0 [17] ;
short arr_2 [17] [17] ;
long long int arr_4 [17] [17] ;
signed char arr_6 [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] ;
long long int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 8529452016472444700ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25898;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 5259834246163680666LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 17531591545790894058ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 7746829913861350155LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
