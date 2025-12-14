#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)28994;
unsigned char var_5 = (unsigned char)231;
unsigned short var_6 = (unsigned short)18118;
unsigned char var_11 = (unsigned char)255;
int zero = 0;
unsigned char var_12 = (unsigned char)106;
unsigned short var_13 = (unsigned short)21972;
unsigned long long int var_14 = 6788345138023793461ULL;
void init() {
}

void checksum() {
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
