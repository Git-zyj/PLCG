#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15873;
long long int var_2 = -446679420594143272LL;
short var_4 = (short)-17594;
unsigned long long int var_10 = 12250666483258061179ULL;
unsigned int var_17 = 1422388748U;
int zero = 0;
unsigned char var_18 = (unsigned char)187;
unsigned long long int var_19 = 10882792462821465137ULL;
int var_20 = 2078915666;
unsigned char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)187;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
