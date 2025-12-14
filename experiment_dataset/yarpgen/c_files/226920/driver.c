#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
unsigned long long int var_4 = 10837715266091054847ULL;
int var_8 = 1577139277;
unsigned short var_9 = (unsigned short)30570;
int var_11 = -180688751;
long long int var_13 = 7002976614365324209LL;
int zero = 0;
short var_17 = (short)-266;
signed char var_18 = (signed char)-44;
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
