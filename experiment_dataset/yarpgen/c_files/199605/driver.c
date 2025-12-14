#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3342375188U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3574280538U;
unsigned char var_15 = (unsigned char)24;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1119795772U;
unsigned char var_21 = (unsigned char)171;
void init() {
}

void checksum() {
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
