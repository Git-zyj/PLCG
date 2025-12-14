#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
signed char var_4 = (signed char)-97;
unsigned long long int var_16 = 18145936743890765924ULL;
signed char var_17 = (signed char)110;
int zero = 0;
int var_20 = -1862562561;
short var_21 = (short)20661;
signed char var_22 = (signed char)-64;
int var_23 = 474753443;
signed char var_24 = (signed char)-58;
unsigned short var_25 = (unsigned short)55745;
short arr_1 [20] ;
int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-32488;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1866561080;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
