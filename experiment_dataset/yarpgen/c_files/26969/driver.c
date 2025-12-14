#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13781;
int var_9 = -15489505;
unsigned long long int var_11 = 8332704010647576476ULL;
int zero = 0;
unsigned long long int var_17 = 2480361980808966491ULL;
int var_18 = -659174739;
short var_19 = (short)-5138;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
