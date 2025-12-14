#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15237707352506340342ULL;
signed char var_6 = (signed char)111;
long long int var_7 = 1307463883953459898LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_19 = 1597112375;
short var_20 = (short)-20590;
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
