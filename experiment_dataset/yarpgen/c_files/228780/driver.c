#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)9293;
long long int var_7 = 8945224945849741611LL;
int var_8 = 1836330369;
int var_12 = 623803891;
int zero = 0;
short var_14 = (short)20589;
short var_15 = (short)-30781;
void init() {
}

void checksum() {
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
