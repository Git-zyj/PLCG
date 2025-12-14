#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29858;
long long int var_7 = -1035036079433588991LL;
unsigned int var_8 = 1893002785U;
int zero = 0;
unsigned short var_12 = (unsigned short)48598;
signed char var_13 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
