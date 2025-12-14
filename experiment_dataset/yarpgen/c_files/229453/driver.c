#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7990767405839567069ULL;
unsigned char var_4 = (unsigned char)238;
signed char var_13 = (signed char)54;
int zero = 0;
unsigned long long int var_15 = 7527892537581936006ULL;
unsigned short var_16 = (unsigned short)10412;
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
