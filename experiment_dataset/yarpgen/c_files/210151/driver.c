#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5596293562843957053ULL;
long long int var_2 = -5736888674566105162LL;
short var_3 = (short)-22245;
int var_7 = -1098988784;
unsigned long long int var_9 = 18320988598947219185ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)6610;
long long int var_11 = -5365881367035786553LL;
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
