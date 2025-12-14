#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2212;
long long int var_3 = -4476583943831883540LL;
unsigned char var_4 = (unsigned char)202;
long long int var_6 = -2407067093241678673LL;
int zero = 0;
unsigned char var_11 = (unsigned char)147;
long long int var_12 = 6227793170364475032LL;
void init() {
}

void checksum() {
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
