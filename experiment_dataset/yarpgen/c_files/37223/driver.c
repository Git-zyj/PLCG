#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1919146981;
unsigned long long int var_1 = 1701851804319629080ULL;
unsigned long long int var_13 = 12268973367703844362ULL;
unsigned short var_15 = (unsigned short)26402;
short var_18 = (short)10501;
int zero = 0;
unsigned long long int var_19 = 16988155375843929554ULL;
signed char var_20 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
