#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
unsigned short var_2 = (unsigned short)33993;
signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)19;
unsigned int var_7 = 349970269U;
short var_10 = (short)-24741;
int zero = 0;
unsigned short var_11 = (unsigned short)14322;
short var_12 = (short)-17088;
short var_13 = (short)-15977;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
