#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 705671137U;
unsigned int var_11 = 501669636U;
int var_15 = -1234774492;
int zero = 0;
unsigned short var_20 = (unsigned short)62211;
unsigned long long int var_21 = 5779076835878991783ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 6686403777368528138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
