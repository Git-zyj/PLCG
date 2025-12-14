#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5016867478705600310ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)246;
unsigned long long int var_6 = 14553843572480314569ULL;
unsigned long long int var_9 = 150712053613254657ULL;
signed char var_13 = (signed char)91;
unsigned char var_18 = (unsigned char)41;
int zero = 0;
int var_19 = -1801068804;
unsigned long long int var_20 = 15111444967790063610ULL;
long long int var_21 = -9148614057202393271LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
