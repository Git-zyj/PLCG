#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7982985053462330986LL;
int var_10 = 1606610091;
long long int var_12 = -1085554925738467730LL;
unsigned long long int var_13 = 16129942465480634773ULL;
unsigned short var_14 = (unsigned short)25099;
unsigned long long int var_16 = 1272239030381355724ULL;
int zero = 0;
short var_20 = (short)-17681;
unsigned short var_21 = (unsigned short)20036;
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
