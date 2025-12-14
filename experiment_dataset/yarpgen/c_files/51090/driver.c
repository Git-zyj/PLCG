#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1556805873;
short var_9 = (short)-429;
int var_10 = -418063774;
long long int var_13 = -4977019324478159621LL;
int zero = 0;
unsigned int var_16 = 2347148599U;
signed char var_17 = (signed char)97;
short var_18 = (short)-19526;
short var_19 = (short)-32424;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
