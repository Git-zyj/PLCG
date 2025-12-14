#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2755191600186040296ULL;
short var_3 = (short)26986;
unsigned int var_6 = 2857235326U;
int var_8 = 1174210543;
unsigned int var_9 = 4166326535U;
int zero = 0;
int var_11 = 200801840;
unsigned long long int var_12 = 8311343015206657624ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-5601;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
