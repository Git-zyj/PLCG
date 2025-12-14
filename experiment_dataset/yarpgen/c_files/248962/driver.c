#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 1232120841U;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 834199253175164603LL;
unsigned char var_17 = (unsigned char)234;
unsigned char var_18 = (unsigned char)68;
void init() {
}

void checksum() {
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
