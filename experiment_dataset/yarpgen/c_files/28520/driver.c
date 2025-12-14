#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1104379327U;
unsigned int var_4 = 2688729410U;
unsigned char var_8 = (unsigned char)61;
short var_10 = (short)-7486;
int zero = 0;
signed char var_18 = (signed char)-111;
unsigned short var_19 = (unsigned short)25340;
void init() {
}

void checksum() {
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
