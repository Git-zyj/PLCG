#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
signed char var_6 = (signed char)39;
unsigned int var_7 = 2109784520U;
signed char var_9 = (signed char)-61;
long long int var_10 = -4984016182554938838LL;
unsigned short var_12 = (unsigned short)56032;
int zero = 0;
unsigned int var_13 = 3551033825U;
signed char var_14 = (signed char)-91;
void init() {
}

void checksum() {
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
