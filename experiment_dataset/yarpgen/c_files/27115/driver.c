#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9290520196474192082ULL;
unsigned char var_7 = (unsigned char)36;
unsigned short var_9 = (unsigned short)63657;
unsigned int var_10 = 3045221600U;
int zero = 0;
signed char var_13 = (signed char)111;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)5;
long long int var_16 = -7967351980252006425LL;
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
