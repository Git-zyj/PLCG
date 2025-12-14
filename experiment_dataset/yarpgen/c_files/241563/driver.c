#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)124;
unsigned char var_7 = (unsigned char)1;
unsigned char var_14 = (unsigned char)36;
int zero = 0;
signed char var_18 = (signed char)108;
unsigned char var_19 = (unsigned char)17;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
