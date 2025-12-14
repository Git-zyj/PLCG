#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
_Bool var_2 = (_Bool)0;
int var_7 = 912955341;
int zero = 0;
unsigned int var_17 = 3537334632U;
long long int var_18 = -6345546768312602951LL;
unsigned int var_19 = 3647893154U;
short var_20 = (short)4614;
_Bool var_21 = (_Bool)1;
unsigned char arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)144;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
