#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned short var_1 = (unsigned short)6245;
unsigned int var_3 = 1729125050U;
unsigned long long int var_15 = 756548562804275986ULL;
int zero = 0;
int var_16 = -265812365;
short var_17 = (short)-26542;
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
