#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)29296;
unsigned short var_8 = (unsigned short)28786;
unsigned char var_11 = (unsigned char)103;
unsigned long long int var_13 = 10896056496399150803ULL;
unsigned short var_14 = (unsigned short)6249;
int zero = 0;
unsigned long long int var_15 = 18244483482651858990ULL;
int var_16 = 1924362788;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
