#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1037937459002908615ULL;
unsigned char var_2 = (unsigned char)24;
signed char var_8 = (signed char)9;
short var_9 = (short)31837;
int zero = 0;
int var_10 = 457936203;
signed char var_11 = (signed char)15;
signed char var_12 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
