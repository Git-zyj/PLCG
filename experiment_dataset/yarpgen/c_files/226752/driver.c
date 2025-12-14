#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17938;
unsigned long long int var_1 = 2113384886349606558ULL;
unsigned long long int var_2 = 8396966808724308779ULL;
unsigned int var_9 = 3551854240U;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
short var_12 = (short)-31431;
unsigned char var_13 = (unsigned char)151;
unsigned long long int var_14 = 2654871082642957155ULL;
unsigned long long int var_15 = 4337217358750698002ULL;
signed char var_16 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
