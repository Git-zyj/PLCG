#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
long long int var_2 = -556062357217179149LL;
unsigned short var_4 = (unsigned short)32995;
unsigned short var_5 = (unsigned short)14661;
unsigned short var_6 = (unsigned short)20344;
unsigned char var_7 = (unsigned char)179;
long long int var_8 = 3684994834689160098LL;
int zero = 0;
unsigned short var_10 = (unsigned short)4266;
unsigned short var_11 = (unsigned short)64509;
unsigned int var_12 = 3341440821U;
unsigned long long int arr_0 [21] ;
unsigned short arr_2 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8913234563308252224ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)47917;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -4006454291230577604LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
