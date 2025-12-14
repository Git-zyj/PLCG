#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
signed char var_4 = (signed char)-82;
short var_6 = (short)-11428;
int var_7 = -1105386148;
unsigned char var_9 = (unsigned char)92;
signed char var_10 = (signed char)80;
int zero = 0;
signed char var_13 = (signed char)-96;
unsigned char var_14 = (unsigned char)107;
unsigned long long int var_15 = 3727064063444353511ULL;
unsigned long long int var_16 = 636773561276069573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
