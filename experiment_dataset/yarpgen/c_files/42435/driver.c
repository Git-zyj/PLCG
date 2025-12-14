#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)150;
long long int var_6 = -535301783899599238LL;
unsigned char var_8 = (unsigned char)109;
long long int var_9 = -7003026669913175228LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1914067851U;
unsigned int var_15 = 1062511029U;
void init() {
}

void checksum() {
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
