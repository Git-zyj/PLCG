#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21900;
signed char var_7 = (signed char)63;
unsigned long long int var_8 = 9239309002857652588ULL;
short var_11 = (short)-4208;
int zero = 0;
unsigned int var_13 = 3344130103U;
unsigned long long int var_14 = 10918508032361148710ULL;
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
