#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 171512988U;
short var_2 = (short)13808;
int var_5 = -920554760;
unsigned long long int var_6 = 5171816940976681917ULL;
signed char var_7 = (signed char)95;
unsigned short var_9 = (unsigned short)49705;
int var_11 = 1620267851;
unsigned short var_12 = (unsigned short)56520;
int zero = 0;
int var_13 = 1846876867;
unsigned long long int var_14 = 13078368559465401185ULL;
unsigned int var_15 = 749438190U;
unsigned int var_16 = 1819387641U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
