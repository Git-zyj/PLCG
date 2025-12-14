#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1622;
long long int var_4 = -8337862542777626457LL;
short var_6 = (short)13139;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_20 = -1748624784531490139LL;
signed char var_21 = (signed char)113;
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
