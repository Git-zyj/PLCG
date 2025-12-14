#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28168;
unsigned long long int var_7 = 16244419110143589850ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)22372;
short var_19 = (short)25910;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
