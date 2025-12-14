#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -766843520;
int var_3 = -1263104942;
signed char var_4 = (signed char)61;
unsigned char var_7 = (unsigned char)54;
long long int var_11 = -360279421796359533LL;
int zero = 0;
short var_14 = (short)-4644;
unsigned char var_15 = (unsigned char)35;
void init() {
}

void checksum() {
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
