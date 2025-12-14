#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7667254355035941008LL;
int var_2 = 882290014;
int var_8 = -21499395;
signed char var_9 = (signed char)-95;
unsigned long long int var_11 = 10860545109166229866ULL;
int zero = 0;
unsigned long long int var_12 = 17342039752271039965ULL;
unsigned char var_13 = (unsigned char)29;
short var_14 = (short)29345;
unsigned int var_15 = 3543284424U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
