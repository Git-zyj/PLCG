#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2433061198U;
unsigned long long int var_6 = 1542234188138361633ULL;
signed char var_10 = (signed char)101;
int zero = 0;
unsigned long long int var_11 = 293855921992731002ULL;
signed char var_12 = (signed char)-97;
int var_13 = 1875008338;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
