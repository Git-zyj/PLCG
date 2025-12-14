#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
unsigned char var_1 = (unsigned char)229;
short var_2 = (short)5319;
int var_7 = -575099621;
signed char var_14 = (signed char)5;
int zero = 0;
unsigned int var_18 = 2775433145U;
signed char var_19 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
