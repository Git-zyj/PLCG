#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6050516257801524782LL;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)160;
unsigned long long int var_9 = 559301889784295848ULL;
long long int var_13 = -5542006341540719339LL;
unsigned long long int var_14 = 10200336340559087531ULL;
int zero = 0;
unsigned long long int var_16 = 1318615152366067990ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
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
