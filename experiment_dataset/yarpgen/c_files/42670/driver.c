#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 4100307208U;
long long int var_17 = -7652450206460664199LL;
long long int var_18 = 5842801457450474990LL;
int zero = 0;
unsigned long long int var_19 = 13651499130354712638ULL;
int var_20 = -1563705981;
short var_21 = (short)-22357;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
