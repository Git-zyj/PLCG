#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 312290051;
unsigned short var_13 = (unsigned short)31938;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)28758;
int zero = 0;
unsigned short var_18 = (unsigned short)61714;
unsigned short var_19 = (unsigned short)52990;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1133689737U;
signed char var_22 = (signed char)56;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1058158566501850817LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
