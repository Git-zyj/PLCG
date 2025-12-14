#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6070;
unsigned int var_4 = 2112055857U;
long long int var_9 = 4158774479400977654LL;
short var_10 = (short)-29028;
long long int var_11 = -4005148035653025377LL;
int zero = 0;
short var_12 = (short)-28472;
unsigned int var_13 = 1136088011U;
unsigned int var_14 = 1971390202U;
void init() {
}

void checksum() {
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
