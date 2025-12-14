#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1775809904;
unsigned short var_16 = (unsigned short)53967;
short var_17 = (short)6544;
int zero = 0;
unsigned char var_20 = (unsigned char)155;
unsigned char var_21 = (unsigned char)99;
long long int var_22 = -9041578009785087453LL;
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
