#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)93;
int var_4 = 702786245;
int var_9 = 1346185107;
short var_10 = (short)2685;
signed char var_11 = (signed char)59;
unsigned int var_12 = 1630863672U;
int zero = 0;
int var_15 = -1736943603;
unsigned int var_16 = 3099416736U;
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
