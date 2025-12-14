#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1340104776;
long long int var_4 = -3562837625104218572LL;
short var_6 = (short)-3032;
int var_7 = 1877498101;
unsigned int var_10 = 662103826U;
int zero = 0;
long long int var_15 = 5414174334871203845LL;
short var_16 = (short)-12633;
long long int var_17 = -359316420792098654LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
