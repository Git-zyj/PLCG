#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9216904593286582771LL;
int var_10 = -917249979;
unsigned char var_12 = (unsigned char)177;
int var_14 = 926215070;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
