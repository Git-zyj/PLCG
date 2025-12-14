#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15055;
signed char var_1 = (signed char)79;
unsigned long long int var_2 = 18236595372813132296ULL;
int var_9 = -373276183;
unsigned int var_10 = 1624613676U;
int zero = 0;
unsigned int var_13 = 2959308379U;
signed char var_14 = (signed char)60;
unsigned long long int var_15 = 14515439535921435879ULL;
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
