#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8696057325789497200ULL;
unsigned short var_2 = (unsigned short)44654;
long long int var_6 = -3177413170917456874LL;
unsigned int var_9 = 3770382195U;
short var_11 = (short)-24845;
int zero = 0;
unsigned int var_12 = 2984759674U;
int var_13 = 1146603889;
signed char var_14 = (signed char)-125;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3797565772U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
