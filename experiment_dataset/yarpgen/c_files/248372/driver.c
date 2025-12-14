#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3743667526841028895LL;
_Bool var_4 = (_Bool)0;
int var_8 = -1659643912;
int zero = 0;
unsigned long long int var_10 = 8446220090624579343ULL;
unsigned short var_11 = (unsigned short)53942;
unsigned int var_12 = 855807781U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
