#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23841;
unsigned char var_2 = (unsigned char)127;
unsigned long long int var_5 = 10359129730643417089ULL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)84;
short var_12 = (short)-23690;
short var_14 = (short)-13606;
unsigned char var_16 = (unsigned char)124;
int zero = 0;
unsigned int var_17 = 1018450423U;
long long int var_18 = 4634400679499596018LL;
short var_19 = (short)20433;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
