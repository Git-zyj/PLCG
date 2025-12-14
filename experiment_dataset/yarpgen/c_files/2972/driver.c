#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6803332914610745544LL;
unsigned short var_7 = (unsigned short)30805;
unsigned long long int var_11 = 13131921262837292555ULL;
unsigned int var_15 = 1659783608U;
unsigned short var_17 = (unsigned short)63847;
int zero = 0;
short var_19 = (short)23195;
long long int var_20 = -1435964531466948725LL;
short var_21 = (short)-6575;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 13751384647159917266ULL : 10646230186030528557ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5628971568988371559ULL : 9638836151333670224ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
