#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1916765332;
int var_3 = -83692349;
unsigned short var_5 = (unsigned short)8477;
short var_13 = (short)-3406;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -8701901317353017327LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
