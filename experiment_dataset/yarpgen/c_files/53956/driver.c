#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47489;
short var_3 = (short)7247;
int var_8 = -1352465389;
int var_9 = 1944105927;
long long int var_10 = -96531547853546246LL;
int zero = 0;
int var_13 = -120377166;
int var_14 = -2056057821;
int var_15 = 430999369;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
