#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 353200454;
unsigned char var_5 = (unsigned char)186;
int var_6 = 198282320;
unsigned char var_7 = (unsigned char)36;
long long int var_13 = -8709966685029211333LL;
int zero = 0;
unsigned long long int var_17 = 2032274572370799598ULL;
signed char var_18 = (signed char)75;
void init() {
}

void checksum() {
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
