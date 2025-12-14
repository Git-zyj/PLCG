#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1567;
unsigned char var_1 = (unsigned char)133;
unsigned long long int var_3 = 8575179651800280330ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)1995;
short var_10 = (short)-11140;
unsigned short var_15 = (unsigned short)14924;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1082361573674729919LL;
_Bool var_23 = (_Bool)0;
int var_24 = 402003747;
signed char var_25 = (signed char)77;
long long int arr_2 [19] ;
int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1351148556273334421LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -2142917850;
}

void checksum() {
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
