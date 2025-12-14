#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned char var_1 = (unsigned char)5;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)190;
short var_16 = (short)4846;
unsigned short var_17 = (unsigned short)22638;
int zero = 0;
short var_19 = (short)23136;
int var_20 = -231562246;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
