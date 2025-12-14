#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29510;
unsigned long long int var_1 = 7668423139840638007ULL;
unsigned short var_4 = (unsigned short)21509;
int var_5 = 1337782549;
short var_7 = (short)-2421;
int zero = 0;
unsigned int var_10 = 3357903674U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3874403554U;
unsigned long long int var_13 = 1649353661782662651ULL;
void init() {
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
