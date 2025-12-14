#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-111;
_Bool var_9 = (_Bool)0;
short var_12 = (short)10435;
unsigned int var_13 = 852131660U;
int zero = 0;
unsigned long long int var_15 = 4046726732404775304ULL;
unsigned long long int var_16 = 5942178009081189870ULL;
short var_17 = (short)11733;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
