#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2774119100U;
unsigned short var_3 = (unsigned short)48472;
unsigned short var_15 = (unsigned short)53151;
unsigned long long int var_16 = 624579864255965284ULL;
int zero = 0;
short var_18 = (short)3898;
short var_19 = (short)4505;
short var_20 = (short)-13017;
short var_21 = (short)29062;
unsigned long long int var_22 = 6285601729175703404ULL;
short var_23 = (short)-3959;
unsigned short arr_2 [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)28869;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)9989;
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
