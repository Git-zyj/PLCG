#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 612795421;
long long int var_3 = -1790887132313767895LL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-65;
int zero = 0;
short var_11 = (short)17163;
unsigned int var_12 = 1729999592U;
unsigned int var_13 = 3440287582U;
unsigned long long int var_14 = 7565806763041833944ULL;
unsigned long long int var_15 = 13410225080564808253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
