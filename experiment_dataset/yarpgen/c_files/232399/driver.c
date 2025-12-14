#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6196;
int var_8 = 1107296865;
unsigned short var_9 = (unsigned short)47213;
short var_12 = (short)-4229;
unsigned long long int var_15 = 10685867140576118185ULL;
unsigned int var_17 = 3046007400U;
unsigned long long int var_19 = 8938371640862535088ULL;
int zero = 0;
unsigned int var_20 = 2992945137U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17306590435587099511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
