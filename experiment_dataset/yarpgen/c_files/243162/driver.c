#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7647122913197325553LL;
unsigned long long int var_3 = 15870442332025853089ULL;
short var_6 = (short)10657;
unsigned long long int var_9 = 15457552416708413776ULL;
signed char var_16 = (signed char)93;
int zero = 0;
unsigned int var_19 = 123964197U;
unsigned int var_20 = 1426879174U;
unsigned long long int var_21 = 2903115768342231068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
