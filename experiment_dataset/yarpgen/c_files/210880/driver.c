#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6986;
unsigned short var_7 = (unsigned short)22800;
int zero = 0;
short var_14 = (short)8054;
unsigned long long int var_15 = 15681727835012105177ULL;
unsigned long long int var_16 = 636825897308098780ULL;
unsigned long long int var_17 = 5648655027062233426ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
