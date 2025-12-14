#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-11;
signed char var_11 = (signed char)59;
unsigned short var_12 = (unsigned short)61483;
unsigned short var_13 = (unsigned short)24358;
int zero = 0;
unsigned short var_14 = (unsigned short)13216;
int var_15 = 1742124082;
signed char var_16 = (signed char)-41;
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
