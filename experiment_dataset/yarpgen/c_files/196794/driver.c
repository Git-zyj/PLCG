#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 987639688;
short var_2 = (short)29410;
unsigned char var_3 = (unsigned char)65;
int var_4 = 1831447937;
long long int var_6 = 1977553641797880381LL;
unsigned long long int var_10 = 1771307022765689205ULL;
int zero = 0;
int var_12 = -875236130;
short var_13 = (short)-22665;
unsigned char var_14 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
