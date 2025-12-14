#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4431;
signed char var_2 = (signed char)26;
unsigned long long int var_8 = 8420222959230329555ULL;
int var_11 = -1748366202;
short var_15 = (short)1972;
short var_16 = (short)-17729;
int zero = 0;
unsigned int var_18 = 3703037899U;
short var_19 = (short)23245;
unsigned int var_20 = 2387931074U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
