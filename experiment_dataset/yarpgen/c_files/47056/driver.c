#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4196010513U;
long long int var_6 = -5058648600056538101LL;
short var_8 = (short)6249;
unsigned char var_9 = (unsigned char)147;
unsigned short var_10 = (unsigned short)65335;
int zero = 0;
unsigned int var_12 = 3588518451U;
unsigned long long int var_13 = 14210021058757457878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
