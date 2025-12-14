#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
long long int var_2 = -6534439339286836855LL;
long long int var_9 = -8399161916949582746LL;
int zero = 0;
short var_12 = (short)25634;
int var_13 = 2094860900;
short var_14 = (short)-24359;
signed char var_15 = (signed char)-62;
unsigned short var_16 = (unsigned short)15744;
signed char var_17 = (signed char)-30;
signed char var_18 = (signed char)43;
unsigned int var_19 = 1621125239U;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
short arr_5 [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2737486088043087933LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 17912860324779311596ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)20281;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-125;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
