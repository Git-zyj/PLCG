#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4547;
long long int var_5 = -2220710826250526138LL;
unsigned char var_6 = (unsigned char)3;
unsigned char var_8 = (unsigned char)7;
unsigned long long int var_11 = 7678645719164191065ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)61;
unsigned char var_19 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
