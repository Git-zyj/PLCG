#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2337360316915910366ULL;
short var_4 = (short)6716;
signed char var_9 = (signed char)17;
short var_12 = (short)4864;
unsigned int var_15 = 2805550698U;
short var_16 = (short)-28213;
int zero = 0;
signed char var_18 = (signed char)71;
signed char var_19 = (signed char)-57;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
