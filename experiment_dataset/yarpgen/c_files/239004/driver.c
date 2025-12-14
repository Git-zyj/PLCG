#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 205417612U;
unsigned int var_4 = 3057998172U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = -6787225644737003280LL;
int zero = 0;
unsigned short var_18 = (unsigned short)48147;
long long int var_19 = -3908049562375387207LL;
int var_20 = -2008417836;
unsigned int var_21 = 1870974411U;
unsigned long long int var_22 = 5759825220873769264ULL;
signed char arr_2 [25] ;
unsigned int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3365392474U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
