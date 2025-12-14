#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1209658575;
int var_2 = -275982654;
unsigned char var_5 = (unsigned char)43;
unsigned long long int var_10 = 12926257541672679610ULL;
int zero = 0;
unsigned int var_11 = 2925892221U;
long long int var_12 = 5453034870921646118LL;
void init() {
}

void checksum() {
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
