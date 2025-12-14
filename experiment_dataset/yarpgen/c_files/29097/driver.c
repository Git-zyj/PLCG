#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1149478882U;
int var_4 = 365444363;
long long int var_10 = 5210728425602297712LL;
_Bool var_11 = (_Bool)0;
int var_12 = -2136383182;
int zero = 0;
int var_13 = 891980148;
long long int var_14 = -4379292477379446444LL;
unsigned long long int var_15 = 11346781895195608019ULL;
long long int var_16 = -6743406921505964961LL;
signed char var_17 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
