#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1504801548;
int var_5 = 1208666740;
int var_8 = 1473015424;
int var_10 = -2029117486;
int zero = 0;
int var_14 = -1579439089;
signed char var_15 = (signed char)-2;
signed char var_16 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
