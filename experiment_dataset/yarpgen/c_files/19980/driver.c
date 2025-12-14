#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 323212211;
long long int var_3 = -8603384488216593674LL;
signed char var_5 = (signed char)63;
unsigned long long int var_7 = 10462456960339700061ULL;
unsigned short var_11 = (unsigned short)59940;
int zero = 0;
unsigned int var_12 = 2454428574U;
long long int var_13 = -6206911260636427263LL;
void init() {
}

void checksum() {
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
