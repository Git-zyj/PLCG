#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10206660136001372124ULL;
int var_7 = 536503205;
unsigned short var_11 = (unsigned short)3356;
unsigned long long int var_14 = 6247659139974905136ULL;
int zero = 0;
int var_15 = 311011689;
short var_16 = (short)-7846;
unsigned long long int var_17 = 10287771194275594680ULL;
short var_18 = (short)25886;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
