#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6045503519710197134ULL;
signed char var_6 = (signed char)49;
unsigned long long int var_9 = 13110771286755271323ULL;
int var_12 = -2016956772;
unsigned int var_14 = 2033361332U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = 1860043075;
unsigned long long int var_21 = 4197090702084098162ULL;
unsigned char var_22 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
