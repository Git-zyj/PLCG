#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1804198945U;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
unsigned long long int var_11 = 15181275466738706587ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
