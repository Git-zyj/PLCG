#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
unsigned int var_4 = 1418007475U;
signed char var_7 = (signed char)76;
unsigned int var_12 = 3196276471U;
int var_15 = -816463969;
int zero = 0;
signed char var_17 = (signed char)119;
signed char var_18 = (signed char)90;
unsigned char var_19 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
