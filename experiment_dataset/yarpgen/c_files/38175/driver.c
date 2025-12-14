#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
short var_4 = (short)-19577;
unsigned char var_9 = (unsigned char)27;
unsigned char var_16 = (unsigned char)145;
int zero = 0;
unsigned long long int var_19 = 11190897834355085010ULL;
long long int var_20 = -2173707547720755455LL;
long long int var_21 = -8263319107454436959LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
