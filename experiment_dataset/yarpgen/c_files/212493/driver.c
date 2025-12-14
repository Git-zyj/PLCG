#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44114;
unsigned short var_1 = (unsigned short)47334;
unsigned short var_2 = (unsigned short)6364;
unsigned long long int var_5 = 12548072021896367470ULL;
unsigned short var_8 = (unsigned short)28021;
int zero = 0;
unsigned short var_13 = (unsigned short)20715;
unsigned short var_14 = (unsigned short)35092;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
