#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1234500463U;
int var_10 = -2053810095;
long long int var_17 = -3019538206251000836LL;
int zero = 0;
unsigned int var_20 = 231923876U;
long long int var_21 = -741129111408459631LL;
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
