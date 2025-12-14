#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
signed char var_6 = (signed char)98;
unsigned char var_13 = (unsigned char)93;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6218719039367222796ULL;
short var_16 = (short)4750;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
