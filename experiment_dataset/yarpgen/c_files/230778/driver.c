#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3829967425U;
signed char var_4 = (signed char)-93;
long long int var_6 = 4823810595346825939LL;
int zero = 0;
short var_10 = (short)21598;
int var_11 = -1241248305;
unsigned short var_12 = (unsigned short)24790;
unsigned int var_13 = 1912711356U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
