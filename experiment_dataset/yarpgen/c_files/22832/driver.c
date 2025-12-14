#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28002;
short var_4 = (short)-24064;
signed char var_10 = (signed char)-111;
unsigned long long int var_14 = 1281403377174878114ULL;
unsigned int var_18 = 2706786270U;
int zero = 0;
short var_20 = (short)18186;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
