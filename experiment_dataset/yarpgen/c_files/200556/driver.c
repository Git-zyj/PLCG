#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6917054177816324242LL;
short var_8 = (short)6141;
unsigned int var_13 = 1846477988U;
unsigned short var_15 = (unsigned short)48225;
unsigned long long int var_17 = 11212068819137301208ULL;
int zero = 0;
signed char var_19 = (signed char)54;
signed char var_20 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
