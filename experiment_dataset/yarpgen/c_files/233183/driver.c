#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6597186500404166059LL;
signed char var_13 = (signed char)105;
unsigned short var_14 = (unsigned short)47578;
short var_15 = (short)-21051;
int zero = 0;
unsigned int var_20 = 3670869048U;
int var_21 = 1709582980;
unsigned long long int var_22 = 1070371222573540475ULL;
long long int var_23 = -7034592238152465565LL;
unsigned long long int arr_0 [12] ;
_Bool arr_1 [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 18212720467559842791ULL : 16995498926418162216ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-21659;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
