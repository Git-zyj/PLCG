#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3758253605708987262ULL;
unsigned long long int var_4 = 10548694877347796671ULL;
signed char var_5 = (signed char)43;
int zero = 0;
unsigned char var_14 = (unsigned char)204;
signed char var_15 = (signed char)25;
unsigned long long int var_16 = 12148610928105811890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
