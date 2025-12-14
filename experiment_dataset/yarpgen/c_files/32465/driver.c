#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6702831066209533470LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8970301009364134686LL;
unsigned char var_4 = (unsigned char)4;
long long int var_6 = 3520156473785156018LL;
long long int var_8 = 5300997047309751907LL;
int zero = 0;
long long int var_11 = 951564715215474050LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
