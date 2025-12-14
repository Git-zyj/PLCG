#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 285492384;
unsigned long long int var_7 = 5207128142405336917ULL;
signed char var_8 = (signed char)27;
int zero = 0;
short var_14 = (short)4996;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
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
