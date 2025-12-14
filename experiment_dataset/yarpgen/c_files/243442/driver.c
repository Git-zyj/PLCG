#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2931954433821264761LL;
int var_2 = -1945524706;
unsigned int var_6 = 1627135198U;
unsigned int var_15 = 1628757325U;
int var_19 = 309331574;
int zero = 0;
unsigned int var_20 = 1968038261U;
unsigned long long int var_21 = 16082915707227583611ULL;
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
