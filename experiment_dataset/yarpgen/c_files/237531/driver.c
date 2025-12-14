#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11339920157912173022ULL;
unsigned short var_4 = (unsigned short)37270;
int var_7 = 956236051;
unsigned long long int var_9 = 12124740247469595204ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4697035608930756946LL;
signed char var_14 = (signed char)4;
signed char arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 384852205799601084ULL : 13499380354820602094ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
