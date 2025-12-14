#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1997221755;
long long int var_3 = 8921473980454996598LL;
signed char var_10 = (signed char)-22;
int var_12 = 2049710135;
int zero = 0;
unsigned long long int var_13 = 16030377375983749329ULL;
int var_14 = -1587984832;
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
