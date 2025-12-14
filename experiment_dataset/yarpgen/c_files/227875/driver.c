#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
long long int var_5 = 6113239451470805677LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -5517617773161516170LL;
unsigned long long int var_11 = 17646568694441599438ULL;
short var_13 = (short)-16796;
unsigned int var_15 = 1855361795U;
unsigned long long int var_16 = 11144116196504703689ULL;
long long int var_17 = -6629061572245655046LL;
int zero = 0;
long long int var_18 = -561887895936806463LL;
short var_19 = (short)19197;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16702860473384780004ULL;
long long int var_22 = -8385821037538427557LL;
int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 861240158;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
