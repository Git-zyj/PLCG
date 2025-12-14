#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8181230558743670025LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1723757474U;
int zero = 0;
int var_15 = 1091767527;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-122;
short var_18 = (short)1131;
_Bool var_19 = (_Bool)0;
int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1774667990;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
