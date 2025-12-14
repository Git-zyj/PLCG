#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 99330708384472243LL;
signed char var_4 = (signed char)-124;
signed char var_8 = (signed char)94;
unsigned int var_9 = 1508479038U;
_Bool var_13 = (_Bool)0;
signed char var_16 = (signed char)80;
signed char var_18 = (signed char)-16;
int zero = 0;
short var_19 = (short)-10965;
unsigned short var_20 = (unsigned short)6444;
signed char var_21 = (signed char)102;
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
