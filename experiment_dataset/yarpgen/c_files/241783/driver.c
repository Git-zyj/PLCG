#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2251522380U;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)177;
_Bool var_13 = (_Bool)1;
long long int var_15 = -4952202772643347560LL;
int zero = 0;
int var_16 = 1611835291;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
