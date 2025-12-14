#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)71;
unsigned long long int var_6 = 17384119516098044146ULL;
long long int var_10 = -8169322614894634523LL;
int zero = 0;
signed char var_12 = (signed char)54;
long long int var_13 = -4815377966998496066LL;
signed char var_14 = (signed char)6;
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
