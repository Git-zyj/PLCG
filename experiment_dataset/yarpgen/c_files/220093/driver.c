#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3563498294897294839ULL;
signed char var_13 = (signed char)-76;
unsigned short var_15 = (unsigned short)15989;
int zero = 0;
short var_19 = (short)-2127;
unsigned short var_20 = (unsigned short)45355;
unsigned short var_21 = (unsigned short)21717;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
