#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1992358972765041266LL;
unsigned long long int var_4 = 10681051787316140262ULL;
unsigned char var_6 = (unsigned char)106;
unsigned long long int var_7 = 12887567621428063151ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -713423342177647003LL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = -1011512877;
int zero = 0;
short var_16 = (short)-24363;
unsigned int var_17 = 3288418562U;
unsigned long long int var_18 = 2554037639855456326ULL;
signed char var_19 = (signed char)-65;
signed char var_20 = (signed char)123;
unsigned char var_21 = (unsigned char)62;
unsigned long long int var_22 = 1506492612939951966ULL;
unsigned int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4127937770U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
