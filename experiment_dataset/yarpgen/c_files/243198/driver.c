#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned char var_9 = (unsigned char)17;
int zero = 0;
unsigned long long int var_20 = 4386741528999484305ULL;
unsigned long long int var_21 = 2326660882367612556ULL;
unsigned short var_22 = (unsigned short)18805;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
