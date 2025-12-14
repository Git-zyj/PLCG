#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2235594645U;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 487774453218010441LL;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
