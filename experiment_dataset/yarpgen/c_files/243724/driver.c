#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2491892458489206220ULL;
long long int var_3 = -5135047961525183011LL;
short var_7 = (short)13027;
unsigned long long int var_17 = 13156286807565638787ULL;
int zero = 0;
long long int var_19 = -9052286868382826289LL;
short var_20 = (short)-28267;
long long int var_21 = -5029937972670997439LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
