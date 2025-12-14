#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7909988539377769719ULL;
signed char var_5 = (signed char)-70;
unsigned short var_7 = (unsigned short)26449;
unsigned short var_8 = (unsigned short)43823;
short var_12 = (short)-19225;
int zero = 0;
signed char var_13 = (signed char)94;
short var_14 = (short)18718;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
