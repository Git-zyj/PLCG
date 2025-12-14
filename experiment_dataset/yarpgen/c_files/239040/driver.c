#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned char var_2 = (unsigned char)200;
short var_3 = (short)-17467;
long long int var_12 = 7248222830926194763LL;
int zero = 0;
int var_18 = 1846009964;
unsigned short var_19 = (unsigned short)41084;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
