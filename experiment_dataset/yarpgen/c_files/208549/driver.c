#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-25;
signed char var_7 = (signed char)-6;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
short var_13 = (short)-22778;
signed char var_14 = (signed char)6;
unsigned long long int var_15 = 11889132347889666648ULL;
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
