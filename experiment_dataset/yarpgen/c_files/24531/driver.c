#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61259;
unsigned int var_4 = 3367934134U;
unsigned short var_5 = (unsigned short)55548;
unsigned char var_6 = (unsigned char)135;
unsigned int var_9 = 2713151166U;
unsigned short var_11 = (unsigned short)24289;
int zero = 0;
unsigned long long int var_14 = 7700575317356231188ULL;
signed char var_15 = (signed char)80;
signed char var_16 = (signed char)-127;
signed char var_17 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
