#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1873409031958374089ULL;
unsigned short var_3 = (unsigned short)10139;
long long int var_9 = 2998762180082070779LL;
unsigned char var_10 = (unsigned char)35;
unsigned short var_14 = (unsigned short)56124;
int zero = 0;
unsigned short var_20 = (unsigned short)3660;
int var_21 = -447186385;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
