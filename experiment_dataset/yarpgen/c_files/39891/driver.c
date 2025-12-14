#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned int var_2 = 2784299044U;
signed char var_4 = (signed char)-13;
unsigned char var_8 = (unsigned char)246;
_Bool var_11 = (_Bool)1;
long long int var_14 = 8712920498602860068LL;
int zero = 0;
unsigned int var_15 = 1469513972U;
signed char var_16 = (signed char)35;
int var_17 = -869034087;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
