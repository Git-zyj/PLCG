#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
long long int var_3 = 1162924155855232411LL;
int var_5 = -1931926164;
short var_6 = (short)-9898;
signed char var_7 = (signed char)46;
unsigned char var_8 = (unsigned char)42;
int zero = 0;
unsigned long long int var_10 = 10908138558511263761ULL;
unsigned long long int var_11 = 7792043062091669178ULL;
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
