#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3090711268U;
int var_1 = 1993828416;
long long int var_2 = -9200721442619532279LL;
short var_3 = (short)20814;
short var_4 = (short)23279;
unsigned int var_5 = 2137681523U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)143;
int zero = 0;
int var_11 = 1414798446;
unsigned char var_12 = (unsigned char)71;
unsigned int var_13 = 2007900645U;
short var_14 = (short)14828;
short var_15 = (short)-5383;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3356154485U : 1656585666U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
