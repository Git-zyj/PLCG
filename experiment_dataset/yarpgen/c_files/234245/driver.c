#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25683;
unsigned int var_2 = 4156896091U;
long long int var_5 = 2316012801143999601LL;
int var_18 = -1896579918;
int zero = 0;
unsigned short var_19 = (unsigned short)35989;
unsigned long long int var_20 = 10000174804419879687ULL;
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
