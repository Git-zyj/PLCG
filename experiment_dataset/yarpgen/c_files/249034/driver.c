#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
long long int var_2 = 1198405333762927806LL;
signed char var_13 = (signed char)-39;
int zero = 0;
short var_15 = (short)1505;
unsigned int var_16 = 2706598573U;
long long int var_17 = 2244913743130948196LL;
short var_18 = (short)11724;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
