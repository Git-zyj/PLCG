#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -466874635;
long long int var_8 = -7373013457058210045LL;
signed char var_9 = (signed char)-95;
short var_10 = (short)-21202;
int zero = 0;
int var_13 = 1890989133;
int var_14 = 1137821120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
