#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 560062143U;
unsigned int var_3 = 25279408U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 4035295029U;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
short var_15 = (short)-2724;
long long int var_16 = 4526990955928676739LL;
void init() {
}

void checksum() {
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
