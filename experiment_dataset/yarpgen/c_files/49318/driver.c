#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1871342004;
unsigned char var_5 = (unsigned char)169;
unsigned int var_6 = 3845067515U;
unsigned int var_8 = 3961117431U;
unsigned char var_9 = (unsigned char)183;
long long int var_11 = 2730977661263521028LL;
int zero = 0;
int var_13 = -1793052724;
int var_14 = -264067246;
int var_15 = -115417071;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
