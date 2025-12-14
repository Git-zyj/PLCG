#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-30;
unsigned char var_10 = (unsigned char)218;
signed char var_13 = (signed char)90;
int zero = 0;
unsigned char var_19 = (unsigned char)28;
unsigned char var_20 = (unsigned char)251;
signed char var_21 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
