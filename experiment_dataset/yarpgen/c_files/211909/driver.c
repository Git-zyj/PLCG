#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3191021197085488922ULL;
int var_1 = 1326206183;
unsigned char var_2 = (unsigned char)206;
unsigned short var_3 = (unsigned short)23328;
unsigned long long int var_4 = 1716844164376899201ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)92;
unsigned long long int var_12 = 14237037624596114286ULL;
int var_13 = 1602604838;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)21168;
int var_16 = -1078411001;
unsigned int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1022223188U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
