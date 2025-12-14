#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2835019365849509303ULL;
short var_11 = (short)3434;
short var_14 = (short)-29787;
int zero = 0;
unsigned long long int var_15 = 1981868704995343750ULL;
unsigned int var_16 = 2439948750U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13243459589936780299ULL;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
