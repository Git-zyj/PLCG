#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned short var_7 = (unsigned short)30349;
unsigned short var_11 = (unsigned short)17692;
int zero = 0;
signed char var_16 = (signed char)-53;
unsigned short var_17 = (unsigned short)30732;
signed char var_18 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
