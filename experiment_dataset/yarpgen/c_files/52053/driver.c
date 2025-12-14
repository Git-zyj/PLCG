#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11379627063509113637ULL;
unsigned int var_4 = 3644287415U;
short var_7 = (short)-12853;
short var_11 = (short)14862;
int zero = 0;
short var_16 = (short)26750;
unsigned long long int var_17 = 17981753142621546424ULL;
unsigned long long int var_18 = 10744982126910359554ULL;
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
