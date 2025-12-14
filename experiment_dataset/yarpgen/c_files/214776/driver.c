#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned char var_2 = (unsigned char)195;
unsigned char var_7 = (unsigned char)177;
int var_10 = -1037457383;
int zero = 0;
unsigned long long int var_11 = 7833127892640684077ULL;
unsigned char var_12 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
