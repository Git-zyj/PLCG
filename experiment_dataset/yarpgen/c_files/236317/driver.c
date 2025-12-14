#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3800315733U;
short var_2 = (short)-14808;
unsigned long long int var_4 = 17849571463517449894ULL;
unsigned int var_6 = 2590137623U;
unsigned long long int var_7 = 1201145062881093707ULL;
unsigned long long int var_8 = 12399133478351913923ULL;
unsigned char var_9 = (unsigned char)238;
int zero = 0;
unsigned long long int var_10 = 8796094255536535595ULL;
unsigned char var_11 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
