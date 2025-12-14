#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2977686187U;
long long int var_8 = -3029882068090254151LL;
unsigned char var_9 = (unsigned char)164;
unsigned int var_13 = 2118661459U;
short var_14 = (short)-19809;
signed char var_16 = (signed char)63;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3895368861789025702LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
