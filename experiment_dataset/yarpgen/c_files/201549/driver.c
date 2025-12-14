#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1475727621;
unsigned int var_3 = 874736680U;
short var_7 = (short)26291;
unsigned int var_9 = 4142003913U;
short var_10 = (short)-9823;
short var_11 = (short)12775;
unsigned long long int var_12 = 13285166183114242832ULL;
int zero = 0;
short var_14 = (short)-2391;
signed char var_15 = (signed char)-108;
unsigned char var_16 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
