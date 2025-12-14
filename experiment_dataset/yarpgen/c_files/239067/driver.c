#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
unsigned int var_8 = 26721277U;
int zero = 0;
long long int var_12 = 401834232851720083LL;
short var_13 = (short)23032;
unsigned char var_14 = (unsigned char)208;
unsigned char var_15 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
