#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33815;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1786902829U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)43;
int zero = 0;
long long int var_15 = 7837864792782023385LL;
short var_16 = (short)25853;
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
