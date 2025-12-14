#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
long long int var_6 = -2359897156878441134LL;
long long int var_9 = -6417811182436337917LL;
long long int var_10 = -244434004995930398LL;
unsigned int var_11 = 1780518396U;
short var_12 = (short)24311;
int zero = 0;
signed char var_13 = (signed char)16;
long long int var_14 = 1124943169468743435LL;
int var_15 = -1261735124;
unsigned short var_16 = (unsigned short)60363;
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
