#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
short var_1 = (short)-27609;
int var_6 = -149578195;
signed char var_7 = (signed char)27;
unsigned short var_10 = (unsigned short)36516;
short var_12 = (short)-11639;
int var_14 = -1963214373;
int zero = 0;
unsigned short var_16 = (unsigned short)34983;
int var_17 = 2092793097;
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
