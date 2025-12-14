#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)19840;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)47790;
unsigned long long int var_6 = 16268903207664948887ULL;
short var_7 = (short)20760;
unsigned long long int var_8 = 14618170763405240882ULL;
unsigned long long int var_11 = 5516294623309087546ULL;
int zero = 0;
unsigned long long int var_12 = 13828333357937166521ULL;
short var_13 = (short)-23009;
void init() {
}

void checksum() {
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
