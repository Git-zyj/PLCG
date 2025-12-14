#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3986;
unsigned short var_11 = (unsigned short)23110;
signed char var_12 = (signed char)-120;
int zero = 0;
unsigned long long int var_15 = 15881490268674400578ULL;
unsigned short var_16 = (unsigned short)25226;
void init() {
}

void checksum() {
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
