#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
_Bool var_1 = (_Bool)0;
long long int var_2 = -8594673543902642LL;
unsigned short var_5 = (unsigned short)5058;
long long int var_7 = 6591229095882744328LL;
unsigned int var_8 = 2285261324U;
int zero = 0;
int var_10 = -431604696;
unsigned int var_11 = 1747941115U;
int var_12 = 388090449;
long long int var_13 = -6551101459704493923LL;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-95;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
