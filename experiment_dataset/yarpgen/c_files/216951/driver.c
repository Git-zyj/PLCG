#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 347975613;
unsigned char var_3 = (unsigned char)226;
long long int var_6 = 386271363625550671LL;
short var_7 = (short)21900;
int var_12 = 248669371;
int zero = 0;
unsigned int var_14 = 3086295513U;
short var_15 = (short)-26888;
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
