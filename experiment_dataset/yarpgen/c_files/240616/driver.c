#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)193;
unsigned long long int var_6 = 9278807396430915248ULL;
unsigned int var_8 = 3110627160U;
long long int var_10 = 700957165868323295LL;
int var_14 = -1942687087;
int zero = 0;
unsigned short var_15 = (unsigned short)30078;
unsigned int var_16 = 3926723153U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
