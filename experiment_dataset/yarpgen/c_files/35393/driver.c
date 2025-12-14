#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
int var_2 = -2008211795;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)103;
unsigned int var_6 = 1842779684U;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
unsigned int var_11 = 3517653753U;
unsigned int var_12 = 3917199453U;
unsigned char var_13 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
