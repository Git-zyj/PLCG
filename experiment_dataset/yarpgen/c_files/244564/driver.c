#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62825;
unsigned long long int var_6 = 358344666005411340ULL;
unsigned long long int var_8 = 12268773300193138223ULL;
short var_15 = (short)15319;
int zero = 0;
long long int var_18 = 6395738527101687916LL;
signed char var_19 = (signed char)72;
unsigned int var_20 = 2536632160U;
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
