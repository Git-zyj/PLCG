#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6238899648307827101LL;
unsigned char var_14 = (unsigned char)187;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 55791046U;
long long int var_21 = 7351585200502220293LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
