#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 51288827;
unsigned short var_8 = (unsigned short)20020;
unsigned short var_9 = (unsigned short)16070;
int zero = 0;
unsigned short var_12 = (unsigned short)17146;
int var_13 = -693349655;
int var_14 = 1387620444;
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
