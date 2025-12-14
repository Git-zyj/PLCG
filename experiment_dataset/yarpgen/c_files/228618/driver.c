#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
long long int var_1 = -705881566748046153LL;
unsigned int var_5 = 961533916U;
int var_9 = 39865911;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 16881949089764625716ULL;
unsigned int var_17 = 1798113074U;
short var_18 = (short)-23639;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
