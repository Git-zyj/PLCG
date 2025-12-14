#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2048537956U;
int var_7 = 1414693516;
unsigned short var_8 = (unsigned short)13623;
unsigned int var_12 = 2420187726U;
int zero = 0;
unsigned short var_15 = (unsigned short)54565;
int var_16 = -1612359087;
long long int var_17 = -1704431799546194045LL;
void init() {
}

void checksum() {
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
