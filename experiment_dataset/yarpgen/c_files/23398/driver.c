#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56470;
long long int var_3 = -6787410261572803091LL;
unsigned short var_4 = (unsigned short)23676;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5703908333013567486LL;
short var_7 = (short)-5181;
int zero = 0;
int var_10 = 1640816914;
int var_11 = 2144900460;
signed char var_12 = (signed char)55;
long long int var_13 = 6354688150998684211LL;
unsigned long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 15133069270442490747ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
