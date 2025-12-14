#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50097;
signed char var_2 = (signed char)123;
long long int var_3 = 1875821674242622420LL;
long long int var_4 = -7550020460332724715LL;
unsigned short var_6 = (unsigned short)41158;
unsigned short var_8 = (unsigned short)12524;
_Bool var_9 = (_Bool)1;
int var_10 = 168752603;
int var_11 = -1371260565;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)101;
int zero = 0;
short var_16 = (short)10577;
signed char var_17 = (signed char)-45;
short var_18 = (short)6858;
unsigned short arr_2 [10] ;
unsigned int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)56605;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1835016072U : 2725323334U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
