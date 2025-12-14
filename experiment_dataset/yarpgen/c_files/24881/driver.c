#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55598;
signed char var_6 = (signed char)-117;
unsigned short var_7 = (unsigned short)20384;
signed char var_9 = (signed char)-87;
int zero = 0;
signed char var_11 = (signed char)120;
unsigned long long int var_12 = 15203540164834636186ULL;
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
