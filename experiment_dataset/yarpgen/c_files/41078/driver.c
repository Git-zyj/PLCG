#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3176242468U;
short var_6 = (short)-18339;
long long int var_16 = 5892755949545386624LL;
int zero = 0;
long long int var_17 = 7624037298738613650LL;
short var_18 = (short)8570;
unsigned short var_19 = (unsigned short)5924;
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
