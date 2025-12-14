#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)62;
short var_8 = (short)-19552;
signed char var_10 = (signed char)-77;
int zero = 0;
short var_12 = (short)3414;
long long int var_13 = 7861368512463746193LL;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
