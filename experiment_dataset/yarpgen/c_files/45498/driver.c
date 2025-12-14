#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned short var_4 = (unsigned short)7776;
unsigned int var_7 = 3619743916U;
short var_9 = (short)-287;
short var_10 = (short)-9572;
int zero = 0;
unsigned int var_11 = 4132387298U;
short var_12 = (short)-32387;
unsigned int var_13 = 2470560366U;
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
