#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2970936381218922559ULL;
short var_3 = (short)-28000;
unsigned short var_4 = (unsigned short)25908;
long long int var_8 = 8862160609282065429LL;
signed char var_9 = (signed char)118;
unsigned long long int var_16 = 12878062690713576458ULL;
int zero = 0;
long long int var_17 = 6900663839187361957LL;
unsigned int var_18 = 987415826U;
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
