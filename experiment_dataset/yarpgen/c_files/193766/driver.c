#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63287;
signed char var_1 = (signed char)104;
int var_3 = 1331114571;
int var_4 = 2131928484;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
signed char var_14 = (signed char)42;
short var_15 = (short)31262;
unsigned short var_16 = (unsigned short)36906;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
