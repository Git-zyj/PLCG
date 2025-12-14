#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
unsigned char var_4 = (unsigned char)149;
long long int var_7 = 243372617942104393LL;
long long int var_8 = 7639756550416078412LL;
unsigned char var_9 = (unsigned char)190;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
unsigned long long int var_14 = 7901275398441424480ULL;
unsigned char var_15 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
