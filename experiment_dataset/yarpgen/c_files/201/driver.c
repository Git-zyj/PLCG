#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 3155032986996752501ULL;
unsigned long long int var_9 = 16616679188448282809ULL;
int zero = 0;
unsigned long long int var_20 = 15157404918963810314ULL;
unsigned char var_21 = (unsigned char)200;
unsigned char var_22 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
