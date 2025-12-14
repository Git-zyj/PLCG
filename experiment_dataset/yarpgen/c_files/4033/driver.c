#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-94;
unsigned short var_9 = (unsigned short)41685;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 11528366563813399740ULL;
short var_18 = (short)17346;
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
