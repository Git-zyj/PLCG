#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3469902193U;
unsigned char var_1 = (unsigned char)120;
signed char var_2 = (signed char)83;
short var_3 = (short)-23372;
unsigned long long int var_4 = 11373111418206963549ULL;
int var_7 = 338506825;
unsigned char var_9 = (unsigned char)20;
unsigned char var_10 = (unsigned char)118;
unsigned char var_13 = (unsigned char)118;
int zero = 0;
signed char var_14 = (signed char)-23;
signed char var_15 = (signed char)-115;
unsigned int var_16 = 3579398605U;
long long int var_17 = -7462921369265079614LL;
_Bool var_18 = (_Bool)1;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
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
