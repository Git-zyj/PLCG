#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 561849663;
short var_10 = (short)-14014;
int var_13 = -995880326;
unsigned long long int var_16 = 7680732413674686201ULL;
int zero = 0;
int var_18 = -860209065;
long long int var_19 = -557412378719766640LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
