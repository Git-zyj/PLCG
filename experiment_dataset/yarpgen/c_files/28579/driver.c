#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned char var_3 = (unsigned char)43;
int var_5 = 1818005486;
unsigned int var_7 = 2130543058U;
unsigned int var_8 = 1482561092U;
unsigned int var_10 = 3931866122U;
unsigned int var_11 = 4209971674U;
unsigned int var_17 = 3017068568U;
int zero = 0;
unsigned int var_18 = 2597952473U;
unsigned long long int var_19 = 719692569884601769ULL;
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
