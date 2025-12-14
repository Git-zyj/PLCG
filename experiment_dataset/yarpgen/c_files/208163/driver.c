#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5984068256268623435LL;
unsigned short var_1 = (unsigned short)29995;
unsigned int var_2 = 3747936135U;
int var_11 = 1589927924;
int zero = 0;
unsigned int var_20 = 2907288018U;
signed char var_21 = (signed char)44;
long long int var_22 = -5814332069787130586LL;
void init() {
}

void checksum() {
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
