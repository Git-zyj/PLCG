#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4362216536146779374LL;
_Bool var_1 = (_Bool)0;
int var_2 = -1869394771;
int var_6 = 187179493;
unsigned char var_9 = (unsigned char)207;
long long int var_10 = -5588024756036735849LL;
unsigned int var_12 = 3170869776U;
int zero = 0;
long long int var_15 = 6724828425686694034LL;
unsigned short var_16 = (unsigned short)32659;
signed char var_17 = (signed char)-28;
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
