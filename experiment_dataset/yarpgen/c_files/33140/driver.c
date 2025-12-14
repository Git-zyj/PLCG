#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 594967566U;
signed char var_4 = (signed char)115;
unsigned char var_5 = (unsigned char)174;
signed char var_6 = (signed char)112;
int var_12 = -1355355017;
unsigned int var_14 = 2218244956U;
int zero = 0;
short var_17 = (short)825;
short var_18 = (short)22770;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
