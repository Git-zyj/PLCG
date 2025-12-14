#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3747;
short var_2 = (short)28252;
unsigned long long int var_4 = 1469728442647316564ULL;
int var_7 = 1618976447;
int var_8 = 598539700;
long long int var_9 = -2845723230410264727LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 5964914748614859497LL;
short var_13 = (short)26484;
short var_14 = (short)7868;
unsigned short var_15 = (unsigned short)11282;
short var_16 = (short)16942;
unsigned char arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)161;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
