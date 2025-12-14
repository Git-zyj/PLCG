#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
long long int var_2 = -3439103555936219102LL;
long long int var_8 = -974332391898167107LL;
unsigned int var_9 = 1136159380U;
unsigned int var_14 = 1331656849U;
int zero = 0;
unsigned int var_15 = 3489466986U;
short var_16 = (short)5176;
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
