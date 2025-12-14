#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2772887549546563057LL;
long long int var_4 = 2657880479024923946LL;
short var_7 = (short)30247;
unsigned int var_10 = 1324773457U;
unsigned short var_12 = (unsigned short)37922;
int zero = 0;
signed char var_16 = (signed char)82;
unsigned long long int var_17 = 8970772704232512823ULL;
unsigned int var_18 = 42433619U;
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
