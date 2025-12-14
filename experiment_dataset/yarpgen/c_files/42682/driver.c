#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19275;
int var_12 = -496051231;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
unsigned short var_19 = (unsigned short)28323;
unsigned short var_20 = (unsigned short)45152;
unsigned long long int var_21 = 6682222528002255012ULL;
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
