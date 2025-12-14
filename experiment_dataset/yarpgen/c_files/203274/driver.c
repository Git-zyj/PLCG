#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17463007041331040385ULL;
int var_4 = 825719214;
unsigned short var_8 = (unsigned short)47068;
int zero = 0;
unsigned short var_17 = (unsigned short)24007;
unsigned char var_18 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
