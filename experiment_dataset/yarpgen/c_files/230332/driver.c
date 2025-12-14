#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4402467337685457561LL;
long long int var_6 = -9088171704286094370LL;
signed char var_19 = (signed char)-11;
int zero = 0;
long long int var_20 = 4042528848131347450LL;
unsigned char var_21 = (unsigned char)56;
unsigned char var_22 = (unsigned char)100;
unsigned char var_23 = (unsigned char)81;
int var_24 = 1253942496;
int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1016785814;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 10515536751666636897ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
