#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned short var_1 = (unsigned short)53140;
short var_5 = (short)9492;
unsigned char var_8 = (unsigned char)68;
unsigned char var_9 = (unsigned char)34;
unsigned long long int var_10 = 1352794186805046100ULL;
int zero = 0;
signed char var_11 = (signed char)-23;
signed char var_12 = (signed char)-86;
signed char var_13 = (signed char)-114;
unsigned long long int var_14 = 194128763428889069ULL;
short var_15 = (short)28556;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
