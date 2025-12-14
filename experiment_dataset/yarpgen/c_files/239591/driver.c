#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32959;
unsigned short var_11 = (unsigned short)4355;
unsigned short var_16 = (unsigned short)28844;
unsigned short var_17 = (unsigned short)41610;
int zero = 0;
unsigned short var_19 = (unsigned short)23041;
unsigned short var_20 = (unsigned short)37737;
void init() {
}

void checksum() {
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
