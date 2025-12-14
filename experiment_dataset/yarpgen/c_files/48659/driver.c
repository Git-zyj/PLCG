#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -930511176;
_Bool var_9 = (_Bool)0;
long long int var_11 = -8540768395168049142LL;
unsigned long long int var_13 = 14253942774351068270ULL;
int zero = 0;
unsigned int var_17 = 2135542154U;
short var_18 = (short)-17553;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
