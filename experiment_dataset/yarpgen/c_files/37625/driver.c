#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)32100;
short var_14 = (short)-32658;
int zero = 0;
short var_17 = (short)-322;
signed char var_18 = (signed char)-106;
unsigned int var_19 = 3800172023U;
unsigned char var_20 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
