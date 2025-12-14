#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)115;
_Bool var_5 = (_Bool)1;
int var_10 = -634279707;
long long int var_12 = 7178647584122344531LL;
int var_13 = -367183701;
unsigned short var_16 = (unsigned short)36954;
unsigned char var_17 = (unsigned char)23;
int zero = 0;
long long int var_19 = 7956986240341017374LL;
unsigned char var_20 = (unsigned char)127;
long long int var_21 = -2211004849335786971LL;
long long int var_22 = 3515642536388724102LL;
unsigned int var_23 = 2812820104U;
unsigned long long int var_24 = 2402135891585682864ULL;
unsigned int var_25 = 4237450402U;
int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2114695604;
}

void checksum() {
    hash(&seed, var_19);
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
