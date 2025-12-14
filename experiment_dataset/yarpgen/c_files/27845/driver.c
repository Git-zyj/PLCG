#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7140172602408345430LL;
unsigned char var_2 = (unsigned char)205;
long long int var_3 = 7143798028082764795LL;
int var_5 = 288682297;
short var_6 = (short)2803;
int zero = 0;
unsigned short var_14 = (unsigned short)9512;
unsigned long long int var_15 = 16750169976795262639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
