#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -695788777;
long long int var_4 = 1933254592692605913LL;
long long int var_6 = 4900273724790386504LL;
unsigned int var_8 = 4244996214U;
unsigned char var_10 = (unsigned char)33;
signed char var_11 = (signed char)114;
signed char var_15 = (signed char)-56;
signed char var_16 = (signed char)38;
unsigned short var_17 = (unsigned short)25504;
short var_19 = (short)11339;
int zero = 0;
signed char var_20 = (signed char)44;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)45295;
signed char var_23 = (signed char)-61;
signed char var_24 = (signed char)-83;
signed char arr_2 [24] [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61246 : (unsigned short)64146;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
