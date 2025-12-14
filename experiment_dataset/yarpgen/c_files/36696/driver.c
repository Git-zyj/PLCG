#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned long long int var_1 = 6942898774995133774ULL;
unsigned int var_7 = 1807395374U;
unsigned long long int var_12 = 8968190516647815814ULL;
_Bool var_17 = (_Bool)1;
int var_19 = -1755592723;
int zero = 0;
unsigned char var_20 = (unsigned char)115;
unsigned int var_21 = 2471954347U;
unsigned char var_22 = (unsigned char)103;
signed char var_23 = (signed char)10;
signed char var_24 = (signed char)-115;
signed char arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)44;
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
