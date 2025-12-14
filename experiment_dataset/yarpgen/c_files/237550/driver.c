#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6946995011384242033LL;
short var_5 = (short)-8692;
unsigned int var_8 = 2397701985U;
short var_9 = (short)-15591;
short var_10 = (short)15154;
int zero = 0;
signed char var_11 = (signed char)-83;
unsigned int var_12 = 3138344338U;
_Bool var_13 = (_Bool)1;
unsigned char arr_0 [11] ;
signed char arr_1 [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -5907306496140258612LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
