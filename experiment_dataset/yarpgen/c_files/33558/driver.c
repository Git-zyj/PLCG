#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3004948554040922039LL;
long long int var_2 = -6449839578506475047LL;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_10 = (short)11218;
long long int var_11 = 5597054318516336600LL;
unsigned char var_12 = (unsigned char)172;
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
