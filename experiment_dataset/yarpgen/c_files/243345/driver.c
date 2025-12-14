#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6296525901396395161ULL;
int zero = 0;
unsigned long long int var_19 = 792129093631878778ULL;
int var_20 = 1552078344;
short var_21 = (short)-20088;
unsigned int arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2815528957U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3140885780U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
