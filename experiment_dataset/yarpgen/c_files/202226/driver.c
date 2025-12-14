#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4471629790956360866ULL;
unsigned char var_5 = (unsigned char)15;
int var_8 = -359268012;
unsigned char var_13 = (unsigned char)68;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)51762;
unsigned short var_17 = (unsigned short)23747;
int var_18 = -1964306368;
void init() {
}

void checksum() {
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
