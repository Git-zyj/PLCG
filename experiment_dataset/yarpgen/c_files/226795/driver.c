#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10941984658094882595ULL;
short var_3 = (short)-7413;
unsigned int var_5 = 682027128U;
signed char var_14 = (signed char)-18;
signed char var_17 = (signed char)-45;
int zero = 0;
signed char var_19 = (signed char)71;
unsigned long long int var_20 = 12573505328434201038ULL;
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
