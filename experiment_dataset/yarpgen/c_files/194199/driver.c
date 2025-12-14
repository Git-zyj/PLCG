#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 370931941;
short var_3 = (short)-12172;
signed char var_5 = (signed char)47;
unsigned char var_10 = (unsigned char)4;
unsigned long long int var_11 = 2574813020130179265ULL;
int var_12 = 1327300718;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
short var_18 = (short)900;
unsigned char var_19 = (unsigned char)217;
long long int var_20 = 6122928302418228289LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
