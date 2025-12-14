#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20610;
long long int var_10 = -3203042532618698687LL;
unsigned int var_17 = 3542260896U;
int zero = 0;
unsigned short var_19 = (unsigned short)43601;
unsigned short var_20 = (unsigned short)38467;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
