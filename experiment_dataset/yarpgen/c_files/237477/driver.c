#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
short var_3 = (short)-9362;
unsigned char var_4 = (unsigned char)233;
unsigned int var_6 = 3050350407U;
int zero = 0;
unsigned long long int var_10 = 8879203533675997938ULL;
signed char var_11 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
