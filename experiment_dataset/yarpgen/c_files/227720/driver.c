#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 2839969640U;
signed char var_8 = (signed char)-95;
unsigned long long int var_11 = 875068464785050696ULL;
unsigned short var_15 = (unsigned short)11081;
unsigned int var_17 = 1041236019U;
int zero = 0;
unsigned long long int var_20 = 13739974659894044830ULL;
unsigned char var_21 = (unsigned char)225;
unsigned int var_22 = 2154622707U;
unsigned long long int var_23 = 17443956688520122306ULL;
unsigned char var_24 = (unsigned char)55;
short arr_0 [10] ;
unsigned short arr_3 [10] ;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)26979;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)14606;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5712571568775842692LL : -5721476129420658964LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
