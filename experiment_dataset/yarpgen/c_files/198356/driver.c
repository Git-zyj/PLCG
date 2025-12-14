#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62127;
unsigned long long int var_2 = 8535851330853876368ULL;
unsigned int var_6 = 2585355594U;
unsigned long long int var_7 = 14098327469828329803ULL;
unsigned short var_8 = (unsigned short)44261;
long long int var_9 = 6567285048759773067LL;
int zero = 0;
long long int var_11 = -7364096487165943239LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 218211195U;
unsigned short var_14 = (unsigned short)16590;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)77;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
