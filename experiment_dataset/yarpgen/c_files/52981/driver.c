#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-59;
unsigned int var_4 = 451802136U;
short var_12 = (short)23702;
int var_13 = 392482311;
int zero = 0;
unsigned long long int var_15 = 16481940845638870019ULL;
int var_16 = -470702419;
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
