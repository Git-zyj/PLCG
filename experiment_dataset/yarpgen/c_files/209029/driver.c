#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6462576687995461899LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)91;
unsigned short var_9 = (unsigned short)50328;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
long long int var_16 = 5276136666950137891LL;
void init() {
}

void checksum() {
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
