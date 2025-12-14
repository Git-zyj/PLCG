#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6385669147896911763LL;
int var_3 = -385418409;
long long int var_4 = -2577915291163704851LL;
short var_5 = (short)31100;
short var_6 = (short)15817;
short var_7 = (short)11916;
long long int var_9 = 2390086325208707132LL;
long long int var_11 = -2918641303187305759LL;
long long int var_12 = 6033549768696309436LL;
int zero = 0;
unsigned int var_15 = 1792431568U;
int var_16 = -323554963;
void init() {
}

void checksum() {
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
