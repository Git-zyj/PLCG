#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4261;
unsigned char var_1 = (unsigned char)57;
long long int var_4 = 1818394566718275094LL;
unsigned long long int var_8 = 4549279768370555213ULL;
int zero = 0;
short var_10 = (short)-6636;
unsigned long long int var_11 = 1237284208178349875ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
