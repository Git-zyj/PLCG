#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned long long int var_8 = 13041535496384453075ULL;
unsigned char var_9 = (unsigned char)205;
int var_18 = -1369616098;
int zero = 0;
short var_19 = (short)4834;
short var_20 = (short)5853;
unsigned int var_21 = 4187193031U;
signed char var_22 = (signed char)-46;
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
