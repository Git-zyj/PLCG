#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3131807123079777840ULL;
unsigned int var_2 = 1347485050U;
signed char var_4 = (signed char)-119;
unsigned long long int var_5 = 766010328203879324ULL;
unsigned int var_6 = 1142095188U;
unsigned long long int var_9 = 1294021796336657225ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-30186;
short var_15 = (short)13056;
unsigned char var_16 = (unsigned char)173;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4320909196358247151LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
