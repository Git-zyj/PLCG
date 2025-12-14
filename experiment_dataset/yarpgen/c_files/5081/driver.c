#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29666;
unsigned int var_7 = 2841585484U;
short var_8 = (short)599;
long long int var_9 = 5601805610832580985LL;
long long int var_12 = 3134940476649813726LL;
int zero = 0;
long long int var_14 = -2850110581148847709LL;
long long int var_15 = -3911206742599875598LL;
short var_16 = (short)-28170;
unsigned int var_17 = 2964516677U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
