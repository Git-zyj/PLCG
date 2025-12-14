#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5660446978845750631LL;
unsigned long long int var_2 = 253249487326245801ULL;
short var_4 = (short)4743;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
int var_10 = -801804100;
unsigned char var_11 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
