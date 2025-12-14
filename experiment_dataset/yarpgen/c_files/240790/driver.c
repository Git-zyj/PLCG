#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
unsigned char var_10 = (unsigned char)170;
long long int var_11 = -5499977303999597631LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -4305745647071675406LL;
void init() {
}

void checksum() {
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
