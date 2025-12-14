#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 393385439845221952ULL;
unsigned int var_7 = 1821237497U;
unsigned short var_8 = (unsigned short)18798;
unsigned long long int var_12 = 16210548557132705863ULL;
int zero = 0;
signed char var_18 = (signed char)42;
_Bool var_19 = (_Bool)0;
int var_20 = -488330482;
unsigned short var_21 = (unsigned short)18167;
unsigned long long int var_22 = 7663472239392976415ULL;
long long int var_23 = -6198324613965501727LL;
unsigned int arr_3 [16] ;
unsigned int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1309200537U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2873257937U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
