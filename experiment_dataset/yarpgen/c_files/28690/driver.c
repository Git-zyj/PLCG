#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -197733133;
unsigned char var_1 = (unsigned char)153;
long long int var_5 = 1108906834656247963LL;
short var_6 = (short)-25492;
int var_9 = -1482817490;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned char var_11 = (unsigned char)160;
int var_12 = 928966526;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
