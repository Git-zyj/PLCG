#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 703732507;
long long int var_5 = -4493904466514613650LL;
unsigned char var_9 = (unsigned char)127;
unsigned long long int var_13 = 18116304594894031349ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
signed char var_15 = (signed char)18;
unsigned int var_16 = 3286817958U;
short var_17 = (short)3014;
void init() {
}

void checksum() {
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
