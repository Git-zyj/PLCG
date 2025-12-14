#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
unsigned short var_3 = (unsigned short)49457;
short var_4 = (short)2155;
short var_5 = (short)-8592;
long long int var_6 = -3725930879260430957LL;
unsigned int var_7 = 860337953U;
int zero = 0;
short var_14 = (short)-1907;
short var_15 = (short)-7133;
long long int var_16 = 7443208259655465337LL;
int var_17 = 1518772083;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
