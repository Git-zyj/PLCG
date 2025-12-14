#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47030;
short var_5 = (short)20079;
short var_6 = (short)29972;
unsigned short var_11 = (unsigned short)38534;
int zero = 0;
unsigned long long int var_20 = 7346175385226243894ULL;
unsigned short var_21 = (unsigned short)24277;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
