#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2099059884;
signed char var_10 = (signed char)102;
signed char var_16 = (signed char)-56;
int var_17 = 1935760484;
int zero = 0;
short var_19 = (short)20837;
int var_20 = 1726067223;
int var_21 = 2037367959;
int var_22 = -1515813420;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
