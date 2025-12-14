#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1168729467;
signed char var_2 = (signed char)48;
short var_3 = (short)28803;
int var_5 = -1643309958;
short var_8 = (short)-18504;
int var_9 = 927712663;
int zero = 0;
long long int var_11 = 1812906591211293786LL;
short var_12 = (short)13050;
int var_13 = 210076264;
long long int var_14 = -1002288188002094266LL;
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
