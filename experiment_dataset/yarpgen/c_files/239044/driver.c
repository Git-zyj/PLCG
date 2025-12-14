#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-31976;
unsigned short var_5 = (unsigned short)64857;
long long int var_6 = 8204440132453125527LL;
int var_9 = -1457326153;
unsigned short var_12 = (unsigned short)63301;
int zero = 0;
long long int var_17 = 3108100521230674676LL;
short var_18 = (short)-19716;
void init() {
}

void checksum() {
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
