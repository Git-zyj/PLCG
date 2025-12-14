#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7352;
unsigned int var_3 = 1813520491U;
signed char var_5 = (signed char)-96;
long long int var_9 = -5730716195153779300LL;
long long int var_10 = -3422088568229181171LL;
int var_11 = 355857116;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -131717943684909744LL;
short var_16 = (short)-17105;
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
