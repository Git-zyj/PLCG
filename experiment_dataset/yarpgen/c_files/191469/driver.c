#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -371651657;
unsigned long long int var_7 = 5839729451317848285ULL;
int var_11 = -1987827820;
short var_12 = (short)-12313;
int zero = 0;
unsigned char var_13 = (unsigned char)14;
unsigned short var_14 = (unsigned short)52217;
void init() {
}

void checksum() {
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
