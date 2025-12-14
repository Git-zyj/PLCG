#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned int var_6 = 3892905210U;
int var_7 = 1686648564;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6561154015207321725LL;
unsigned short var_16 = (unsigned short)19823;
int var_17 = -538934039;
unsigned char var_18 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
