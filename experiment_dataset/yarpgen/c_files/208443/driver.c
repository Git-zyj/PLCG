#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8759155570050780437LL;
unsigned char var_3 = (unsigned char)125;
long long int var_9 = -294363109072373828LL;
unsigned char var_10 = (unsigned char)225;
unsigned char var_14 = (unsigned char)223;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)21758;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
