#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29463;
short var_6 = (short)-140;
short var_7 = (short)-9092;
unsigned long long int var_9 = 2274366685603737394ULL;
int zero = 0;
unsigned long long int var_11 = 14026666769344034036ULL;
unsigned char var_12 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
