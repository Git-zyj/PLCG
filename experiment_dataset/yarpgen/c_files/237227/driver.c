#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
_Bool var_3 = (_Bool)0;
int var_5 = 1455114272;
long long int var_6 = -6475430740229605099LL;
signed char var_9 = (signed char)53;
unsigned int var_10 = 3067171312U;
int zero = 0;
unsigned int var_11 = 1841654755U;
unsigned char var_12 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
