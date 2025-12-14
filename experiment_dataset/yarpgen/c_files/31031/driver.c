#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1664178824607132224LL;
int var_3 = 1485325480;
long long int var_7 = 248199283900439569LL;
unsigned short var_11 = (unsigned short)35331;
int zero = 0;
unsigned short var_13 = (unsigned short)65255;
unsigned char var_14 = (unsigned char)22;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)59658;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
