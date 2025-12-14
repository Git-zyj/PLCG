#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-941;
long long int var_9 = 727071452820952311LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_16 = 16536365221054633944ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 971700431U;
_Bool var_19 = (_Bool)1;
int var_20 = -1799858926;
void init() {
}

void checksum() {
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
