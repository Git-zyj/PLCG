#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
_Bool var_3 = (_Bool)1;
unsigned char var_9 = (unsigned char)109;
int var_10 = 718677410;
unsigned long long int var_13 = 18414426915072149969ULL;
int zero = 0;
short var_14 = (short)-10964;
int var_15 = 1630747323;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
