#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14486298926712216780ULL;
int var_3 = 1611423259;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-108;
unsigned int var_7 = 2195253646U;
unsigned long long int var_9 = 13290792006343426975ULL;
int zero = 0;
signed char var_14 = (signed char)-99;
unsigned char var_15 = (unsigned char)46;
int var_16 = 1684693353;
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
