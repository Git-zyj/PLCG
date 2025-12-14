#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1878750316401311284ULL;
int var_3 = -1918666637;
int var_6 = 184765552;
_Bool var_8 = (_Bool)1;
int var_9 = 224990225;
unsigned char var_12 = (unsigned char)215;
int zero = 0;
signed char var_14 = (signed char)49;
unsigned int var_15 = 2570383524U;
signed char var_16 = (signed char)13;
void init() {
}

void checksum() {
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
