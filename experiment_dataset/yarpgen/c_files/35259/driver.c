#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 759618276;
int var_4 = -403207510;
short var_8 = (short)19236;
int var_10 = 1846888774;
signed char var_11 = (signed char)126;
unsigned char var_13 = (unsigned char)118;
int zero = 0;
short var_19 = (short)-12080;
signed char var_20 = (signed char)46;
signed char var_21 = (signed char)106;
long long int var_22 = 6924155551986766025LL;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 15201328702423798464ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
