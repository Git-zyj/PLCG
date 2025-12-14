#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 14355231382244964238ULL;
short var_6 = (short)-6173;
long long int var_7 = -1487696281830523241LL;
int zero = 0;
long long int var_11 = 1892839956225866169LL;
int var_12 = 2083938190;
unsigned char var_13 = (unsigned char)23;
long long int var_14 = -2497682544598202275LL;
unsigned long long int var_15 = 15808453129715329191ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
