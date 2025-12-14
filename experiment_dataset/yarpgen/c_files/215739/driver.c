#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5392606810303583631LL;
unsigned long long int var_7 = 5581707546928641395ULL;
long long int var_10 = 8872627312876588043LL;
unsigned char var_16 = (unsigned char)70;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2911346278U;
_Bool var_22 = (_Bool)1;
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
