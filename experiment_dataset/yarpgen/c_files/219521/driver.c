#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned long long int var_5 = 13039488443549376324ULL;
short var_6 = (short)-17197;
unsigned long long int var_10 = 17193476021916606454ULL;
int zero = 0;
unsigned long long int var_12 = 15185882444539862957ULL;
signed char var_13 = (signed char)43;
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
