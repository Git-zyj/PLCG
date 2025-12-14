#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14494;
unsigned short var_4 = (unsigned short)8423;
unsigned int var_5 = 517775607U;
signed char var_7 = (signed char)-77;
signed char var_9 = (signed char)56;
int zero = 0;
short var_12 = (short)25651;
unsigned long long int var_13 = 11855607025387452800ULL;
int var_14 = -1005765416;
int var_15 = -535894588;
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
