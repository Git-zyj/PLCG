#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16653824645884384918ULL;
unsigned char var_10 = (unsigned char)95;
unsigned char var_14 = (unsigned char)74;
int zero = 0;
short var_19 = (short)19607;
unsigned char var_20 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
