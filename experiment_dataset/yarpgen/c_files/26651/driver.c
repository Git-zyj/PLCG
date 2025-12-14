#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2852581628U;
unsigned long long int var_7 = 11473979118573827906ULL;
unsigned short var_8 = (unsigned short)18207;
int zero = 0;
unsigned char var_14 = (unsigned char)80;
unsigned short var_15 = (unsigned short)44596;
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
