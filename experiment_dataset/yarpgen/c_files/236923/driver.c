#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-31236;
int var_11 = 291599720;
int zero = 0;
unsigned short var_20 = (unsigned short)19722;
unsigned int var_21 = 834690761U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2511567691518506714LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
