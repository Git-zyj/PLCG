#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58454;
signed char var_4 = (signed char)28;
short var_5 = (short)10433;
signed char var_6 = (signed char)-6;
unsigned long long int var_8 = 1616704821714407323ULL;
unsigned int var_9 = 469944077U;
long long int var_10 = -5077585888882984863LL;
long long int var_11 = -2458008034976606948LL;
int zero = 0;
long long int var_12 = -3413513395679000032LL;
unsigned int var_13 = 456138685U;
unsigned long long int var_14 = 1959242586931519726ULL;
long long int var_15 = -949829098346041560LL;
unsigned long long int var_16 = 14396059556457308008ULL;
short arr_0 [10] ;
unsigned int arr_2 [10] [10] ;
short arr_3 [10] ;
int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-19339;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 604268520U : 2454274373U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-2132;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1811250843 : -1929477785;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
