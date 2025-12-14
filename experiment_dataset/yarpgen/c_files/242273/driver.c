#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13970398243932796639ULL;
short var_6 = (short)-15236;
unsigned int var_7 = 1015186657U;
long long int var_8 = -9047360574565585034LL;
int zero = 0;
int var_10 = 1403796085;
unsigned int var_11 = 793650536U;
int var_12 = -1244668532;
short var_13 = (short)-29008;
short var_14 = (short)30138;
unsigned int arr_0 [21] ;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2248816659U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 9622505406163640674ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
