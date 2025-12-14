#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7822862995097910226LL;
long long int var_3 = -4280495916342140676LL;
signed char var_15 = (signed char)76;
short var_17 = (short)5336;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
unsigned char var_21 = (unsigned char)236;
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
