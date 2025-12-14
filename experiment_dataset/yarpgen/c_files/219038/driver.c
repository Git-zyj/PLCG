#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 3336012656921566819LL;
unsigned int var_15 = 2780048577U;
unsigned int var_17 = 4120016530U;
int zero = 0;
short var_18 = (short)5914;
unsigned short var_19 = (unsigned short)15193;
short var_20 = (short)22045;
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
