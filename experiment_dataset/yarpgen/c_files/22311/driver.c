#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14905;
int var_3 = -460190539;
short var_5 = (short)-2785;
unsigned char var_6 = (unsigned char)250;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 14327847856333286634ULL;
unsigned long long int var_11 = 10084737669362700823ULL;
short var_13 = (short)4508;
int zero = 0;
int var_15 = -1032991936;
unsigned long long int var_16 = 16118158809434475183ULL;
long long int var_17 = -5155616774072665818LL;
unsigned int var_18 = 4228412235U;
unsigned long long int var_19 = 14869153900233792690ULL;
unsigned long long int arr_4 [10] [10] ;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1168453282284837251ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-52;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
