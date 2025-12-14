#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
int var_3 = -317389286;
unsigned long long int var_5 = 4976517341151256261ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)56248;
short var_11 = (short)-5470;
unsigned char var_12 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
