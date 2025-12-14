#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17198325664565930085ULL;
long long int var_2 = 6854405276894298217LL;
unsigned int var_7 = 4193128190U;
unsigned long long int var_10 = 919281428571269246ULL;
unsigned short var_11 = (unsigned short)33634;
int zero = 0;
int var_12 = -1638562751;
unsigned int var_13 = 1405411300U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3888972452800395154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
