#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26986;
signed char var_3 = (signed char)61;
unsigned int var_11 = 3032885660U;
int zero = 0;
long long int var_16 = -1067615060991408116LL;
signed char var_17 = (signed char)-40;
unsigned char var_18 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
