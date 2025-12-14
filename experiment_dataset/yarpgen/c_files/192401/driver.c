#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_15 = 1835184219014696937ULL;
long long int var_17 = -3203824789639901197LL;
int zero = 0;
unsigned char var_20 = (unsigned char)174;
unsigned int var_21 = 4092540652U;
unsigned int var_22 = 4104783370U;
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
