#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13385709342707550088ULL;
unsigned int var_3 = 2182999698U;
unsigned short var_5 = (unsigned short)31417;
unsigned long long int var_9 = 9894850860850331100ULL;
signed char var_14 = (signed char)-27;
signed char var_16 = (signed char)-45;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)55228;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3433876305U;
unsigned short var_21 = (unsigned short)13849;
long long int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4415943295063134715LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2549834749508268757ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
