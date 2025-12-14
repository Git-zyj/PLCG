#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -132606257;
int var_7 = 589424135;
unsigned long long int var_9 = 7688517492567928931ULL;
unsigned short var_15 = (unsigned short)24523;
signed char var_16 = (signed char)26;
signed char var_19 = (signed char)-69;
int zero = 0;
long long int var_20 = -4849959877602740620LL;
unsigned long long int var_21 = 12418709425203507022ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
