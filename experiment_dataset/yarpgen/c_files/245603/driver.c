#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1609041241U;
signed char var_3 = (signed char)-12;
int var_10 = 1369354309;
short var_12 = (short)20629;
signed char var_17 = (signed char)14;
int zero = 0;
signed char var_18 = (signed char)-17;
unsigned short var_19 = (unsigned short)10657;
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
