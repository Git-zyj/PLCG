#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6152871886487283190ULL;
short var_3 = (short)-17647;
short var_4 = (short)13924;
unsigned short var_7 = (unsigned short)50724;
unsigned long long int var_8 = 6096294439457512422ULL;
int zero = 0;
unsigned long long int var_10 = 15730649861077348220ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
