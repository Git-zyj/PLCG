#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
signed char var_2 = (signed char)-6;
unsigned int var_3 = 1121950363U;
unsigned short var_9 = (unsigned short)47741;
short var_10 = (short)29533;
int var_11 = -782364240;
int zero = 0;
unsigned int var_14 = 2003549455U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 10065297467120000407ULL;
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
