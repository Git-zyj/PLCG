#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6165442806792024217LL;
long long int var_2 = -9073394710362086038LL;
_Bool var_3 = (_Bool)0;
short var_7 = (short)7457;
int zero = 0;
unsigned long long int var_13 = 16804115657254116579ULL;
signed char var_14 = (signed char)-109;
void init() {
}

void checksum() {
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
