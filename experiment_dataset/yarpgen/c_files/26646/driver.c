#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-6;
unsigned short var_13 = (unsigned short)14745;
signed char var_14 = (signed char)-6;
int zero = 0;
unsigned long long int var_16 = 15625159248650944834ULL;
int var_17 = -367320891;
unsigned short var_18 = (unsigned short)46295;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
