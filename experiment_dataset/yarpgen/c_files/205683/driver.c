#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5854;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2436602731U;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)12;
unsigned long long int var_11 = 5885444947122341603ULL;
int zero = 0;
unsigned int var_12 = 4096576882U;
unsigned short var_13 = (unsigned short)64265;
void init() {
}

void checksum() {
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
