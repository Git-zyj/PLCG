#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
signed char var_2 = (signed char)104;
unsigned char var_8 = (unsigned char)101;
signed char var_9 = (signed char)24;
signed char var_10 = (signed char)-17;
int var_13 = 1091149254;
int zero = 0;
signed char var_17 = (signed char)-94;
signed char var_18 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
