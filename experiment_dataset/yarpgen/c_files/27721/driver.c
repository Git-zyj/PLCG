#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)103;
int var_7 = -2141754146;
unsigned char var_8 = (unsigned char)195;
unsigned int var_10 = 705806751U;
unsigned short var_11 = (unsigned short)6225;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 27979555;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
