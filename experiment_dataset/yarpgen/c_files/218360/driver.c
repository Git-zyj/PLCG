#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3376815097U;
short var_4 = (short)-9035;
unsigned long long int var_6 = 11823782548589298531ULL;
long long int var_9 = 2667385895168978397LL;
signed char var_10 = (signed char)101;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
unsigned long long int var_14 = 9181160147441797242ULL;
void init() {
}

void checksum() {
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
