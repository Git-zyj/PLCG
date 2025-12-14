#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2997278834U;
unsigned int var_10 = 3862494965U;
unsigned int var_16 = 1195334015U;
short var_18 = (short)28911;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-25789;
short var_21 = (short)18525;
unsigned char var_22 = (unsigned char)112;
unsigned char var_23 = (unsigned char)0;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -192276204 : -529763992;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
