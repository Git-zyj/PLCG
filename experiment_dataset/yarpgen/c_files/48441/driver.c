#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10240;
long long int var_4 = 5569205655378820063LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 37908997U;
int zero = 0;
unsigned short var_10 = (unsigned short)57557;
long long int var_11 = 6344417600446281809LL;
short var_12 = (short)-26169;
unsigned int var_13 = 3402255508U;
unsigned short var_14 = (unsigned short)43188;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 35386312 : -2005839207;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
