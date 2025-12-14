#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)44;
unsigned int var_8 = 2980542164U;
long long int var_12 = -7770359048079586686LL;
int zero = 0;
unsigned long long int var_13 = 1232757989201550485ULL;
unsigned long long int var_14 = 12332459566556911825ULL;
unsigned char var_15 = (unsigned char)149;
unsigned char var_16 = (unsigned char)15;
unsigned char var_17 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
