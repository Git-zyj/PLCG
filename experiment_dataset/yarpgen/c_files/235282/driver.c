#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4398861853597526487LL;
unsigned long long int var_16 = 1647890843111978254ULL;
int zero = 0;
unsigned long long int var_18 = 9849107372906082813ULL;
unsigned short var_19 = (unsigned short)25448;
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
