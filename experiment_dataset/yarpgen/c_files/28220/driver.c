#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)128;
int var_6 = -1280433798;
unsigned char var_9 = (unsigned char)110;
unsigned char var_11 = (unsigned char)148;
int zero = 0;
int var_19 = 665761254;
long long int var_20 = -1647949093808671396LL;
int var_21 = 1642597286;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
