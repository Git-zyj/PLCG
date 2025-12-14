#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13602020968701983877ULL;
short var_1 = (short)3066;
unsigned long long int var_4 = 3432750017861652120ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)4201;
unsigned short var_12 = (unsigned short)22151;
void init() {
}

void checksum() {
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
