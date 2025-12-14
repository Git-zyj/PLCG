#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)1841;
long long int var_4 = 4448980461859139070LL;
unsigned short var_5 = (unsigned short)39243;
unsigned short var_7 = (unsigned short)53013;
short var_8 = (short)-1690;
short var_9 = (short)-29662;
short var_10 = (short)21089;
int zero = 0;
unsigned long long int var_11 = 1367221330333083071ULL;
short var_12 = (short)28977;
short var_13 = (short)-13952;
long long int var_14 = 4342171248361235906LL;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
