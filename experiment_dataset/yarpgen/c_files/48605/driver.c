#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4514890595892464802LL;
unsigned short var_1 = (unsigned short)1090;
unsigned char var_6 = (unsigned char)139;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)899;
int zero = 0;
long long int var_15 = 1024789319476090616LL;
unsigned char var_16 = (unsigned char)146;
int var_17 = -205023443;
unsigned char var_18 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
