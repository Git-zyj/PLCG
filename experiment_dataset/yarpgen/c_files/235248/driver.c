#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2694161333U;
unsigned long long int var_5 = 11288169578182104671ULL;
short var_10 = (short)27738;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-16;
signed char var_18 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
