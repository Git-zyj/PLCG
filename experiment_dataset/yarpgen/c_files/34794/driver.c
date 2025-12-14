#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)11;
unsigned short var_11 = (unsigned short)57114;
unsigned long long int var_12 = 8392573150942803246ULL;
int zero = 0;
short var_16 = (short)-8886;
short var_17 = (short)-11145;
void init() {
}

void checksum() {
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
