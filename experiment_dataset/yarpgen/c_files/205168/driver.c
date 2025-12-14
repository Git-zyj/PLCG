#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 615313918;
long long int var_7 = -1188122261192086194LL;
unsigned long long int var_10 = 2557318132228801870ULL;
unsigned short var_15 = (unsigned short)19115;
unsigned long long int var_16 = 279817884890454729ULL;
int zero = 0;
short var_17 = (short)16188;
unsigned int var_18 = 2502251173U;
void init() {
}

void checksum() {
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
