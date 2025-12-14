#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 177033868;
int var_6 = 1327120034;
signed char var_14 = (signed char)-41;
unsigned long long int var_16 = 4248123420595163190ULL;
short var_17 = (short)-10020;
int zero = 0;
short var_20 = (short)4108;
short var_21 = (short)-27973;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
