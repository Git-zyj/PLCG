#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1576005274;
unsigned int var_1 = 3062245634U;
unsigned int var_2 = 2208352046U;
unsigned char var_4 = (unsigned char)169;
long long int var_5 = 1504886466660282615LL;
unsigned char var_9 = (unsigned char)248;
int zero = 0;
unsigned char var_10 = (unsigned char)150;
unsigned char var_11 = (unsigned char)177;
unsigned long long int var_12 = 14437381101953313084ULL;
unsigned char var_13 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
