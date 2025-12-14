#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 7871531892767891659LL;
unsigned int var_7 = 3513329031U;
unsigned char var_11 = (unsigned char)103;
int zero = 0;
unsigned char var_13 = (unsigned char)153;
long long int var_14 = -3860667759733368700LL;
_Bool var_15 = (_Bool)1;
int var_16 = -668703256;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
