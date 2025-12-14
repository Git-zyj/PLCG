#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64406;
unsigned int var_4 = 2230810653U;
int var_6 = 1701815286;
unsigned short var_7 = (unsigned short)59383;
short var_8 = (short)-7560;
signed char var_9 = (signed char)-111;
int var_12 = 213100977;
int zero = 0;
unsigned int var_13 = 1839768968U;
unsigned long long int var_14 = 6662597642454343159ULL;
short var_15 = (short)9650;
short var_16 = (short)4591;
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
