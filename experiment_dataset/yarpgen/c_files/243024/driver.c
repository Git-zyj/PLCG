#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17748795598055438928ULL;
short var_7 = (short)-23982;
unsigned long long int var_11 = 733424660573852402ULL;
unsigned long long int var_13 = 16496417672830779346ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)206;
unsigned int var_17 = 3763751487U;
unsigned int var_18 = 603911890U;
void init() {
}

void checksum() {
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
