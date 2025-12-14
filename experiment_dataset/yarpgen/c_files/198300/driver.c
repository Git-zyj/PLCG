#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)160;
unsigned char var_10 = (unsigned char)112;
short var_15 = (short)25668;
int zero = 0;
signed char var_19 = (signed char)102;
unsigned short var_20 = (unsigned short)132;
unsigned short var_21 = (unsigned short)16330;
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
