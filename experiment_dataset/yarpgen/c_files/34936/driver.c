#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3450778800592307257ULL;
long long int var_1 = -420173875301852887LL;
int var_11 = -971061444;
short var_13 = (short)19635;
unsigned long long int var_15 = 18200532964432254262ULL;
int zero = 0;
short var_17 = (short)13645;
unsigned int var_18 = 521617673U;
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
