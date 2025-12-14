#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5766188985604637367LL;
int var_4 = -1063876212;
signed char var_6 = (signed char)-115;
short var_15 = (short)-19110;
unsigned long long int var_16 = 14588459789308445209ULL;
int zero = 0;
short var_19 = (short)4762;
int var_20 = -1426845046;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
