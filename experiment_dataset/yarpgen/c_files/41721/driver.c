#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22226;
unsigned short var_2 = (unsigned short)12504;
long long int var_4 = -4536007001390992236LL;
int var_6 = -25190689;
unsigned long long int var_7 = 6890518473599272775ULL;
signed char var_8 = (signed char)21;
int var_9 = 502871526;
int zero = 0;
unsigned short var_13 = (unsigned short)26335;
long long int var_14 = 6995704485234092333LL;
int var_15 = -1517919154;
long long int var_16 = -7883171400583534395LL;
unsigned short var_17 = (unsigned short)44424;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
