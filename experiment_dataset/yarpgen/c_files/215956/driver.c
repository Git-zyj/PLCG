#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4927474043380676992ULL;
signed char var_10 = (signed char)65;
signed char var_11 = (signed char)-7;
int zero = 0;
unsigned short var_13 = (unsigned short)53641;
short var_14 = (short)-74;
unsigned int var_15 = 3083757222U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
