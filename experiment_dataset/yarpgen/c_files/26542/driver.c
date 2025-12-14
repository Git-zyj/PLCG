#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1572195296U;
unsigned long long int var_2 = 12260685646843548959ULL;
unsigned int var_7 = 3555710255U;
int zero = 0;
int var_16 = -190685208;
unsigned int var_17 = 4033257006U;
unsigned long long int var_18 = 3005831035590378832ULL;
long long int var_19 = 2148220768286108560LL;
int var_20 = 1501901857;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
