#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1908;
short var_2 = (short)17607;
unsigned long long int var_10 = 17082259015688592533ULL;
int var_16 = 1054880317;
int zero = 0;
unsigned char var_18 = (unsigned char)6;
int var_19 = -1526143540;
signed char var_20 = (signed char)-24;
unsigned short var_21 = (unsigned short)32812;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
