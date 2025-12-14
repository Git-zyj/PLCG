#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
short var_2 = (short)-18170;
unsigned char var_5 = (unsigned char)79;
unsigned long long int var_8 = 18316598154734905418ULL;
int var_19 = -1754728892;
int zero = 0;
unsigned short var_20 = (unsigned short)58136;
unsigned char var_21 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
