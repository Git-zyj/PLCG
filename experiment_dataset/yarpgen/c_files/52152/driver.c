#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)195;
unsigned long long int var_6 = 9822089525394637750ULL;
int zero = 0;
unsigned long long int var_10 = 15650570970906726498ULL;
long long int var_11 = 8754711493647321756LL;
short var_12 = (short)-6488;
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
