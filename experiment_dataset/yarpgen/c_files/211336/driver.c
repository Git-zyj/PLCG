#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3556;
signed char var_4 = (signed char)51;
long long int var_12 = -8179008277878417143LL;
unsigned long long int var_13 = 17204826849404676452ULL;
int zero = 0;
short var_15 = (short)-27820;
short var_16 = (short)7640;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
