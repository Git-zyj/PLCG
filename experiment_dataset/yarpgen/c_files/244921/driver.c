#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3200636330045119201LL;
long long int var_2 = -6559780694213153733LL;
long long int var_3 = 121765663415427570LL;
long long int var_8 = 995471303161129341LL;
long long int var_10 = -740207217859584451LL;
long long int var_11 = 8501677239748946723LL;
long long int var_12 = 2988691586718424190LL;
int zero = 0;
long long int var_16 = 5779312413446568510LL;
long long int var_17 = 54986320303417533LL;
void init() {
}

void checksum() {
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
