#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1100658527029402135ULL;
unsigned short var_5 = (unsigned short)50585;
unsigned short var_6 = (unsigned short)59351;
int zero = 0;
unsigned short var_10 = (unsigned short)29536;
unsigned short var_11 = (unsigned short)53081;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
