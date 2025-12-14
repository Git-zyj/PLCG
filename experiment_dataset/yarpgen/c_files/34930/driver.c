#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4002998089U;
unsigned long long int var_5 = 4744016786919271262ULL;
unsigned long long int var_6 = 14155221581653845313ULL;
short var_9 = (short)-20147;
unsigned long long int var_10 = 15135482743469750886ULL;
unsigned long long int var_11 = 1817132004098667175ULL;
unsigned long long int var_15 = 14642853848908933631ULL;
int zero = 0;
signed char var_16 = (signed char)-11;
unsigned long long int var_17 = 4594252431705398799ULL;
void init() {
}

void checksum() {
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
