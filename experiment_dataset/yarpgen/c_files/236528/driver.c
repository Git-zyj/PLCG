#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28653;
unsigned long long int var_3 = 1243691101586985870ULL;
unsigned short var_8 = (unsigned short)26752;
int zero = 0;
unsigned short var_10 = (unsigned short)32725;
unsigned char var_11 = (unsigned char)222;
signed char var_12 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
