#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23991;
long long int var_1 = -3436750591189448997LL;
long long int var_6 = 913036935457493121LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned char var_11 = (unsigned char)1;
long long int var_12 = -750421909785951525LL;
unsigned char var_13 = (unsigned char)210;
int var_14 = 2103062644;
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
