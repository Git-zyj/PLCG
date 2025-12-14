#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned char var_2 = (unsigned char)80;
short var_3 = (short)11961;
unsigned short var_5 = (unsigned short)14090;
unsigned long long int var_6 = 7684876741665649227ULL;
unsigned char var_9 = (unsigned char)236;
unsigned long long int var_11 = 11434138632449377139ULL;
int var_12 = 1487183594;
unsigned long long int var_14 = 18230721323734438886ULL;
int zero = 0;
int var_15 = -375031957;
unsigned char var_16 = (unsigned char)142;
long long int var_17 = -2576176798032194105LL;
unsigned long long int var_18 = 7412669535983798616ULL;
long long int var_19 = 4911082757608084485LL;
long long int var_20 = 563586024215676928LL;
unsigned char arr_2 [22] [22] ;
short arr_3 [22] [22] [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)12406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17080651549532971635ULL : 1509177966325106961ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
