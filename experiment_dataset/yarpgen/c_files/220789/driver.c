#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22333;
_Bool var_10 = (_Bool)0;
signed char var_16 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_19 = 1584046613275475928ULL;
long long int var_20 = 3319636537588179769LL;
void init() {
}

void checksum() {
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
