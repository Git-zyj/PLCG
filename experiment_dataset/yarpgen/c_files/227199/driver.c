#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 195480047;
long long int var_4 = -1632054544547715118LL;
unsigned int var_5 = 1843277548U;
int zero = 0;
unsigned short var_10 = (unsigned short)44237;
short var_11 = (short)-27364;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
