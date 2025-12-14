#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned char var_3 = (unsigned char)178;
int var_8 = -1013023145;
unsigned short var_10 = (unsigned short)1508;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -604942280;
int var_13 = 1985522223;
signed char var_14 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
