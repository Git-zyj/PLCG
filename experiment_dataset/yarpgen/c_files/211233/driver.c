#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4066636124955284693LL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-23367;
int var_11 = -307708932;
int var_13 = -1791059260;
int zero = 0;
signed char var_19 = (signed char)-126;
signed char var_20 = (signed char)-48;
void init() {
}

void checksum() {
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
