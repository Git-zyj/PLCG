#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -251736059;
signed char var_8 = (signed char)-73;
unsigned long long int var_12 = 14679727730536011935ULL;
long long int var_15 = 2109987052891254854LL;
int zero = 0;
unsigned int var_20 = 322439027U;
unsigned long long int var_21 = 13600662713812614797ULL;
unsigned char var_22 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
