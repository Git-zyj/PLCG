#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2336;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_16 = (unsigned short)9833;
int zero = 0;
unsigned short var_18 = (unsigned short)16026;
short var_19 = (short)4252;
unsigned long long int var_20 = 3430096094978820027ULL;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -6461863317723951460LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7193747484900810920ULL : 12572921556177729100ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
