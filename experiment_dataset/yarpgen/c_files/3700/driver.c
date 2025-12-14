#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5046651205495113228LL;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2077246738U;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
unsigned int var_16 = 12091617U;
_Bool var_17 = (_Bool)1;
int var_18 = -504607293;
int var_19 = -27465737;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
