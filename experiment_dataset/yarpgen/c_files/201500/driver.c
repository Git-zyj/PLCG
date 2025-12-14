#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8439605520330539987LL;
signed char var_10 = (signed char)87;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-4;
long long int var_18 = -4914006166271368009LL;
short var_19 = (short)-12298;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
