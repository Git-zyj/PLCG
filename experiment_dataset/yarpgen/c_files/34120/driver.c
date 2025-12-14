#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned char var_1 = (unsigned char)39;
short var_4 = (short)9097;
unsigned short var_7 = (unsigned short)50994;
int zero = 0;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)-23443;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
