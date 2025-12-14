#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)8;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)122;
signed char var_12 = (signed char)58;
int zero = 0;
unsigned int var_14 = 3437705542U;
long long int var_15 = 1911792440745032852LL;
unsigned int var_16 = 3437383139U;
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
