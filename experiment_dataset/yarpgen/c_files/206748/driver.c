#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3019696125U;
short var_2 = (short)31909;
short var_9 = (short)-16549;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)7;
unsigned long long int var_19 = 11043726772527083037ULL;
void init() {
}

void checksum() {
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
