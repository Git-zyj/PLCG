#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8388005820781431849ULL;
signed char var_5 = (signed char)-116;
short var_6 = (short)-20582;
unsigned int var_7 = 2885297509U;
long long int var_8 = 2831549411868505485LL;
unsigned long long int var_10 = 7934177304944817994ULL;
short var_12 = (short)-2495;
signed char var_13 = (signed char)-28;
unsigned long long int var_15 = 3956405241651911572ULL;
long long int var_16 = 7841064140773660644LL;
int var_17 = -2146536847;
signed char var_18 = (signed char)120;
int zero = 0;
unsigned long long int var_19 = 18142294189566713957ULL;
signed char var_20 = (signed char)-25;
short var_21 = (short)16291;
int var_22 = 1516272641;
unsigned short arr_0 [22] [22] ;
unsigned long long int arr_3 [22] ;
signed char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)57247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 7339205786753817118ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
