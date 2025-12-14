#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12267959542278657738ULL;
long long int var_2 = -3943198812142289639LL;
unsigned short var_3 = (unsigned short)21755;
long long int var_4 = 2291619148289147553LL;
long long int var_8 = -7987326032427172500LL;
unsigned int var_14 = 2735980090U;
int zero = 0;
long long int var_20 = 4033993399509168099LL;
unsigned char var_21 = (unsigned char)239;
long long int var_22 = -6431045955199750105LL;
long long int var_23 = 6511407872367466218LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
