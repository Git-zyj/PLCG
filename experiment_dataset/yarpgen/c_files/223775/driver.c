#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18673;
unsigned long long int var_8 = 4997255259222834103ULL;
int var_9 = 696837651;
int zero = 0;
unsigned char var_18 = (unsigned char)32;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-32014;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
