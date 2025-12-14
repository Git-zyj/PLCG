#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1160825399;
int var_6 = -1167034458;
unsigned short var_8 = (unsigned short)35867;
unsigned char var_11 = (unsigned char)190;
int zero = 0;
short var_13 = (short)-31453;
unsigned long long int var_14 = 1738250834584325426ULL;
short var_15 = (short)-1233;
void init() {
}

void checksum() {
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
