#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
short var_3 = (short)-22058;
short var_5 = (short)-26175;
signed char var_6 = (signed char)62;
short var_8 = (short)-27431;
short var_9 = (short)24319;
unsigned int var_10 = 1632614247U;
int zero = 0;
unsigned short var_11 = (unsigned short)60736;
short var_12 = (short)16819;
short var_13 = (short)6429;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
