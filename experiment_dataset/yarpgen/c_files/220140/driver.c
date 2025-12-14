#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5487789014217358336ULL;
unsigned long long int var_8 = 14178559184742243612ULL;
unsigned short var_18 = (unsigned short)26746;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
int var_20 = -795559539;
unsigned int var_21 = 3467975594U;
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
