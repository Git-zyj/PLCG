#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24064;
unsigned char var_8 = (unsigned char)36;
unsigned char var_11 = (unsigned char)64;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-69;
int var_20 = -2015842807;
int var_21 = -1896292013;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 2321028068U;
}

void checksum() {
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
