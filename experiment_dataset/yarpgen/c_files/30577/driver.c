#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
int var_7 = -1765125543;
unsigned char var_11 = (unsigned char)185;
signed char var_17 = (signed char)12;
int zero = 0;
int var_20 = -975925854;
signed char var_21 = (signed char)-18;
signed char var_22 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
