#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8268862700699055731ULL;
unsigned int var_11 = 1057914501U;
int var_12 = 401637721;
short var_13 = (short)25379;
int zero = 0;
signed char var_18 = (signed char)74;
long long int var_19 = -2924763003310622843LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
