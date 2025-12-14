#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 483789218U;
unsigned int var_6 = 1587673653U;
signed char var_9 = (signed char)71;
signed char var_10 = (signed char)18;
unsigned long long int var_12 = 12179129454759369392ULL;
unsigned int var_13 = 1153987646U;
signed char var_15 = (signed char)93;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-10019;
_Bool var_19 = (_Bool)0;
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
