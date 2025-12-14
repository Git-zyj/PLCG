#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -22321672264528272LL;
unsigned long long int var_9 = 11340152843975184184ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 4627772528660607078ULL;
unsigned short var_16 = (unsigned short)53211;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-23;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)18069;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 14078988595563193446ULL : 14761353778032523870ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
