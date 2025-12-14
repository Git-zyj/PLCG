#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3786848383U;
unsigned long long int var_6 = 13655577030609062502ULL;
int var_9 = 493922297;
int zero = 0;
int var_18 = -919966100;
short var_19 = (short)26708;
signed char var_20 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
