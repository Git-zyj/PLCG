#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
signed char var_7 = (signed char)20;
int var_9 = -2073503473;
_Bool var_10 = (_Bool)1;
int var_15 = -1694260775;
int zero = 0;
unsigned int var_18 = 2663649938U;
short var_19 = (short)776;
void init() {
}

void checksum() {
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
