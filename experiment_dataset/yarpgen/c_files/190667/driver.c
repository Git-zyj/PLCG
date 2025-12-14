#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3631;
int var_1 = -264362119;
short var_4 = (short)-23838;
long long int var_9 = 5358478149284629726LL;
unsigned long long int var_10 = 8721648447450894728ULL;
int zero = 0;
long long int var_12 = 8068207461216333671LL;
long long int var_13 = -4115426665235888375LL;
long long int var_14 = 1386736104715281859LL;
short var_15 = (short)-26086;
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
