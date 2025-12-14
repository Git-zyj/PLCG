#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-76;
unsigned short var_8 = (unsigned short)48042;
short var_11 = (short)-3582;
unsigned int var_16 = 2540978816U;
int zero = 0;
unsigned long long int var_19 = 1404723719759014647ULL;
unsigned char var_20 = (unsigned char)21;
unsigned short var_21 = (unsigned short)25974;
unsigned short var_22 = (unsigned short)54323;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
