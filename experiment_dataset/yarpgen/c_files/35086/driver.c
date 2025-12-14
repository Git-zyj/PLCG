#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)892;
signed char var_8 = (signed char)71;
signed char var_14 = (signed char)39;
int var_19 = 1504484039;
int zero = 0;
unsigned long long int var_20 = 6316730540326350378ULL;
unsigned char var_21 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
