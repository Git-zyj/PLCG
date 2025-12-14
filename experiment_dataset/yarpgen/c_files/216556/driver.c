#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 742804574007130616ULL;
_Bool var_3 = (_Bool)1;
int var_9 = -91030711;
short var_10 = (short)-10893;
unsigned int var_12 = 3016484136U;
int var_17 = 1168903090;
int zero = 0;
short var_18 = (short)29760;
short var_19 = (short)-6940;
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
