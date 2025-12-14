#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56554;
unsigned long long int var_7 = 8867855868200104713ULL;
short var_10 = (short)2797;
short var_13 = (short)-16334;
unsigned long long int var_15 = 10471081460224507445ULL;
int zero = 0;
int var_18 = -1455585720;
unsigned long long int var_19 = 14548028102545515238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
