#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22227;
unsigned long long int var_2 = 9645937914075499067ULL;
short var_6 = (short)-4268;
unsigned short var_7 = (unsigned short)38139;
int zero = 0;
unsigned char var_12 = (unsigned char)208;
signed char var_13 = (signed char)-22;
short var_14 = (short)-19223;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
