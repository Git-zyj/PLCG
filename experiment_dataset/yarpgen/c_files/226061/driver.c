#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3990586768666930706LL;
long long int var_8 = 7573889887573791292LL;
unsigned char var_10 = (unsigned char)171;
unsigned int var_11 = 1565037520U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1611637595U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
