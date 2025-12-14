#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1417514030;
unsigned long long int var_1 = 3069063496125716503ULL;
unsigned int var_4 = 2909282692U;
_Bool var_9 = (_Bool)1;
int var_12 = 138787982;
unsigned long long int var_16 = 7032512513533719045ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-86;
short var_19 = (short)-26044;
unsigned short var_20 = (unsigned short)52670;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1922506215120138107LL : -8942508226498186569LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
