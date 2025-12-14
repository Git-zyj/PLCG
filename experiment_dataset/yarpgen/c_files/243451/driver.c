#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
short var_2 = (short)14020;
unsigned int var_14 = 2172420086U;
int zero = 0;
unsigned long long int var_18 = 8103685954743388537ULL;
unsigned long long int var_19 = 17476399511347494332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
