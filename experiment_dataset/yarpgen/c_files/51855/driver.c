#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)182;
unsigned int var_8 = 3836078203U;
unsigned char var_9 = (unsigned char)66;
unsigned long long int var_11 = 9353472914949142732ULL;
int zero = 0;
short var_14 = (short)25424;
signed char var_15 = (signed char)104;
unsigned int var_16 = 1542357909U;
void init() {
}

void checksum() {
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
