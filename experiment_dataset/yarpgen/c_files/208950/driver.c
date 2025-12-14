#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)200;
unsigned long long int var_6 = 6142076000007049073ULL;
unsigned long long int var_7 = 5773264886548514366ULL;
unsigned char var_17 = (unsigned char)73;
int zero = 0;
int var_18 = 1571143069;
int var_19 = -736835383;
unsigned short var_20 = (unsigned short)9507;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
