#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11334;
unsigned short var_6 = (unsigned short)36056;
signed char var_7 = (signed char)-54;
unsigned short var_9 = (unsigned short)15578;
_Bool var_12 = (_Bool)1;
unsigned short var_16 = (unsigned short)13869;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)7540;
unsigned int var_21 = 2759591194U;
int var_22 = 796415993;
signed char var_23 = (signed char)21;
unsigned short var_24 = (unsigned short)45855;
long long int var_25 = 2603153046685054419LL;
long long int var_26 = 8688466592132518201LL;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49867 : (unsigned short)37549;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)16531;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45302 : (unsigned short)57899;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
