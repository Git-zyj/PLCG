#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1191814182403276164LL;
_Bool var_9 = (_Bool)0;
unsigned short var_14 = (unsigned short)16474;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
unsigned int var_17 = 631234636U;
unsigned int var_18 = 2289851108U;
int var_19 = -1461621254;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
