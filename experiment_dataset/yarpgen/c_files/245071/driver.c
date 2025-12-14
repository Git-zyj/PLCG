#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
int var_3 = -1681412640;
unsigned short var_11 = (unsigned short)15863;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
long long int var_15 = 6347543492829883343LL;
unsigned char var_16 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
