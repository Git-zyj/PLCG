#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5921107562708083021LL;
unsigned long long int var_6 = 1155369370265011108ULL;
short var_11 = (short)25983;
int zero = 0;
unsigned short var_13 = (unsigned short)2416;
int var_14 = -1278137459;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
