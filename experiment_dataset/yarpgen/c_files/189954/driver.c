#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned char var_1 = (unsigned char)211;
unsigned char var_2 = (unsigned char)31;
int var_5 = 1092495245;
unsigned long long int var_9 = 15461807466348273694ULL;
unsigned char var_11 = (unsigned char)27;
long long int var_12 = -2029070939880974553LL;
int zero = 0;
long long int var_13 = 630434444108846289LL;
unsigned char var_14 = (unsigned char)88;
short var_15 = (short)11845;
unsigned char var_16 = (unsigned char)6;
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
