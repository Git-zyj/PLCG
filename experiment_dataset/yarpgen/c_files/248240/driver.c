#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)941;
signed char var_4 = (signed char)97;
signed char var_6 = (signed char)93;
unsigned short var_7 = (unsigned short)56214;
long long int var_8 = -2737276036113514178LL;
int var_9 = 22402649;
int zero = 0;
signed char var_10 = (signed char)-75;
unsigned short var_11 = (unsigned short)12465;
unsigned short var_12 = (unsigned short)64865;
short var_13 = (short)5209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
