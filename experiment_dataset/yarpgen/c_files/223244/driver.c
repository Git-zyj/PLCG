#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)15;
unsigned long long int var_4 = 7070388370236962331ULL;
short var_5 = (short)-31182;
int var_6 = -1418580348;
short var_11 = (short)-26600;
unsigned short var_13 = (unsigned short)46628;
int zero = 0;
unsigned int var_14 = 2776244846U;
short var_15 = (short)30458;
long long int var_16 = 8094985285941099943LL;
unsigned short var_17 = (unsigned short)20563;
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
