#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
int var_4 = 665137748;
unsigned char var_5 = (unsigned char)79;
short var_6 = (short)25411;
unsigned char var_7 = (unsigned char)1;
short var_8 = (short)1388;
unsigned char var_12 = (unsigned char)23;
int zero = 0;
int var_13 = 458813281;
int var_14 = 320935823;
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
