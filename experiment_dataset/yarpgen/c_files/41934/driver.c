#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34050;
unsigned short var_1 = (unsigned short)9795;
long long int var_2 = -1392827466831420231LL;
unsigned long long int var_4 = 14614419363758034528ULL;
unsigned short var_5 = (unsigned short)23496;
short var_7 = (short)13921;
long long int var_9 = -8945710932882773311LL;
unsigned short var_10 = (unsigned short)45431;
int zero = 0;
int var_12 = -1558421614;
long long int var_13 = -7496164417377116095LL;
unsigned long long int var_14 = 5327724574432968516ULL;
unsigned int var_15 = 3967825007U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
