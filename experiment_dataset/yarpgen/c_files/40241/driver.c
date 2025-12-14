#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)40;
unsigned long long int var_12 = 7123787876201691641ULL;
int zero = 0;
unsigned long long int var_20 = 19456579525205340ULL;
short var_21 = (short)-20817;
unsigned long long int var_22 = 9528937236093039884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
