#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 140557935473129457LL;
signed char var_5 = (signed char)-107;
short var_7 = (short)-27052;
long long int var_11 = -5132662103277980635LL;
int zero = 0;
unsigned short var_12 = (unsigned short)19956;
unsigned short var_13 = (unsigned short)24955;
void init() {
}

void checksum() {
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
