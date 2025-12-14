#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 768188627;
short var_3 = (short)29562;
unsigned long long int var_4 = 2750296166038795282ULL;
int var_6 = 1916645040;
unsigned int var_10 = 983103793U;
int zero = 0;
unsigned short var_11 = (unsigned short)8741;
int var_12 = 1663105224;
unsigned int var_13 = 1853821318U;
unsigned long long int var_14 = 9976984618139675896ULL;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-11075 : (short)-19420;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
