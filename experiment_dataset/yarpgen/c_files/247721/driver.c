#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1988653374;
signed char var_14 = (signed char)-24;
unsigned short var_16 = (unsigned short)188;
int zero = 0;
unsigned short var_17 = (unsigned short)37734;
unsigned int var_18 = 1670837914U;
unsigned short var_19 = (unsigned short)52524;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
