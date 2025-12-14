#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23989;
unsigned char var_6 = (unsigned char)165;
signed char var_7 = (signed char)-31;
unsigned short var_11 = (unsigned short)18274;
int zero = 0;
unsigned long long int var_14 = 16925560794498965056ULL;
int var_15 = 19267835;
void init() {
}

void checksum() {
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
