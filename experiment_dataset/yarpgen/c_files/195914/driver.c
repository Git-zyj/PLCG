#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1282318301;
long long int var_4 = -6745785241246503649LL;
unsigned int var_10 = 3292398832U;
unsigned long long int var_14 = 14404043779169813947ULL;
int zero = 0;
unsigned long long int var_15 = 14498712837240319487ULL;
unsigned int var_16 = 4029941469U;
unsigned char var_17 = (unsigned char)236;
_Bool var_18 = (_Bool)1;
unsigned int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2665447959U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
