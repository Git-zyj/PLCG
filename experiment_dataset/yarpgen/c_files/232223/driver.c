#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 573539286421087164LL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)9775;
unsigned long long int var_11 = 2251742338738198394ULL;
unsigned char var_15 = (unsigned char)190;
int zero = 0;
short var_20 = (short)-9699;
_Bool var_21 = (_Bool)1;
int var_22 = -273380934;
unsigned int var_23 = 3333531538U;
unsigned short var_24 = (unsigned short)20976;
int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -672992707;
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
