#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 628060031;
short var_2 = (short)3898;
unsigned int var_4 = 968990939U;
long long int var_5 = -6574921338657986202LL;
int var_6 = 1966126258;
short var_7 = (short)-7096;
long long int var_8 = 1345379648984023111LL;
short var_9 = (short)-4077;
_Bool var_11 = (_Bool)1;
int var_12 = 1731050387;
unsigned int var_13 = 181720283U;
int zero = 0;
unsigned long long int var_14 = 7801061740143171070ULL;
signed char var_15 = (signed char)-96;
int var_16 = -643462944;
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
