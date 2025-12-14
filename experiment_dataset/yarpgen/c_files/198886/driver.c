#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-93;
unsigned long long int var_6 = 14263555649998428365ULL;
short var_10 = (short)32113;
int zero = 0;
long long int var_13 = -7822852266627702490LL;
unsigned short var_14 = (unsigned short)6569;
unsigned char var_15 = (unsigned char)17;
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
