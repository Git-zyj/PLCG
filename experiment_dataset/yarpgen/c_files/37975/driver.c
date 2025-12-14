#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1342452194;
short var_4 = (short)-29796;
int var_5 = -235538009;
long long int var_6 = -1479256248091902730LL;
unsigned short var_8 = (unsigned short)25901;
int var_9 = -644017197;
short var_15 = (short)18486;
short var_17 = (short)25401;
long long int var_18 = -4102237298870376193LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 2918838425237725828LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
