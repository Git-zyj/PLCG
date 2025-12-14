#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)50672;
unsigned int var_6 = 2663939525U;
short var_10 = (short)25626;
int zero = 0;
int var_13 = -971717157;
long long int var_14 = 5280671102682975945LL;
unsigned int var_15 = 2380762933U;
short var_16 = (short)7794;
int var_17 = 452727768;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
