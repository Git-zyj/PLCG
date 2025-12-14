#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
_Bool var_4 = (_Bool)1;
short var_9 = (short)-6816;
unsigned long long int var_10 = 891061735652386553ULL;
long long int var_11 = 2289799384762814559LL;
int zero = 0;
long long int var_12 = -4816210354804069193LL;
signed char var_13 = (signed char)119;
signed char var_14 = (signed char)11;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16143031552522834276ULL : 17960932987987876829ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
