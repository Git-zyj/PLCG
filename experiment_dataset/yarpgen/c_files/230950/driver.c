#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6273397288148081532ULL;
short var_1 = (short)13653;
unsigned char var_2 = (unsigned char)43;
int var_4 = -1158453125;
_Bool var_5 = (_Bool)0;
int var_10 = 405039256;
int zero = 0;
int var_11 = 1974689496;
unsigned char var_12 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
