#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
unsigned char var_3 = (unsigned char)179;
short var_4 = (short)-29623;
unsigned char var_6 = (unsigned char)4;
unsigned char var_7 = (unsigned char)26;
short var_9 = (short)-7621;
int var_10 = 1019561941;
int zero = 0;
unsigned long long int var_11 = 12715395067253605786ULL;
signed char var_12 = (signed char)14;
short var_13 = (short)-25871;
int var_14 = 592884330;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
