#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2119107063U;
unsigned long long int var_4 = 14785035898248800768ULL;
long long int var_6 = 3323534861119666302LL;
int zero = 0;
unsigned long long int var_11 = 12751448490471403582ULL;
unsigned int var_12 = 2398550599U;
short var_13 = (short)-22072;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
