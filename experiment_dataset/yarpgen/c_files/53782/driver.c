#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2836739507739110062LL;
int var_5 = -221811978;
long long int var_7 = 1380642782514020821LL;
int var_9 = 600321180;
int zero = 0;
short var_15 = (short)18116;
int var_16 = -428067535;
signed char var_17 = (signed char)84;
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
