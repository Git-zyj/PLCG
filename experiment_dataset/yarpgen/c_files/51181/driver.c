#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -351886655;
unsigned short var_6 = (unsigned short)25384;
unsigned long long int var_7 = 10816800951592795825ULL;
int zero = 0;
short var_11 = (short)20851;
unsigned short var_12 = (unsigned short)1211;
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
