#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9777898375361909195ULL;
long long int var_3 = 3605682288909765873LL;
unsigned int var_4 = 3219456557U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)253;
signed char var_9 = (signed char)118;
int zero = 0;
unsigned long long int var_10 = 15345953658181441862ULL;
signed char var_11 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
