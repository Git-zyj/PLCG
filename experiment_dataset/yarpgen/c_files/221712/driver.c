#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)230;
unsigned long long int var_7 = 4279039114509476121ULL;
short var_13 = (short)21513;
signed char var_15 = (signed char)86;
int zero = 0;
unsigned long long int var_16 = 11156184326383767212ULL;
short var_17 = (short)-29045;
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
